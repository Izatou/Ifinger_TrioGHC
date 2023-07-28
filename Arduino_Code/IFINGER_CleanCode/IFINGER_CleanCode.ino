
/*Penentu Tipe Ifinger*/
#define /*IGLUCO*/ IHEART /*ICHOL*/ /*IURIC*/

/*Penentu Model Ifinger*/
#define MODEL2

#include "used_libraries.h"

String FirmwareVer = {
  "4.44"
};


//##Function top
//================================ALL main program======================================

void setup() {
  EEPROM.begin(EEPROM_SIZE);

  bacaEEPROM_PWM();
  
  hitung_data_offline = EEPROM.read(16);
  //mode_oled  =  EEPROM.read(9);

  display.begin();
  display.clearBuffer();
  display.setFont(u8g2_font_t0_18b_tf);
  display.drawStr(10, 22, "");
  display.sendBuffer();
  
  #ifdef MODEL2
    esp_sleep_enable_ext0_wakeup(GPIO_NUM_0, 0); //1 = High, 0 = Low
    ++bootCount;
    if (bootCount == 1)
      esp_deep_sleep_start();
  #endif


  //Change mode type of ifinger
  int tombol = 2;
  
  while(1){      
    if (digitalRead(16) == 0) 
      tombol = 1;
    if (digitalRead(16) != 0) {
      if (tombol==1)
        type++;
      tombol=0;
      }

  if(type>3) type=0;

  //Show type of ifinger
  if(type==0){
      display.clearBuffer();
      display.setFont(u8g2_font_t0_18b_tf);
      display.drawStr(10, 22, "IGLUCO");
      display.sendBuffer();
      }
  if(type==1){
      display.clearBuffer();
      display.setFont(u8g2_font_t0_18b_tf);
      display.drawStr(10, 22, "IHEART");
      display.sendBuffer();
    }
  if(type==2){
      display.clearBuffer();
      display.setFont(u8g2_font_t0_18b_tf);
      display.drawStr(10, 22, "ICHOL");
      display.sendBuffer();_deviceName = "ICHOL";
    }
  if(type==3){
      display.clearBuffer();
      display.setFont(u8g2_font_t0_18b_tf);
      display.drawStr(10, 22, "IURIC");
      display.sendBuffer();_deviceName = "IURIC";
    }
    sec++;
    delay(10);
    if (sec >= 100){
      sec=0;
      break;
    }
   }

  delay(2000);
  
  //cast to 1
  type=1;   
  sens[3] = 0; sens[4] = 0; sens[5] = 0;


  //Inisisasi SDCard
  SD_MMC.begin("/sdcard", true);
  uint64_t cardSize = SD_MMC.cardSize() / (1024 * 1024);
  SerialBT.begin(_deviceName);

  display.clearBuffer();
  display.setFont(u8g2_font_t0_18b_tf);
  display.drawStr(10, 22, "");
  display.sendBuffer();
  delay(500);

  id_alat = byte(EEPROM.read(0));

  display.clearBuffer();
  display.setBitmapMode(false /* solid */);
  display.setDrawColor(1);


  #ifdef MODEL2
    display.drawXBM( 0, 0, 128, 64, logo);
    display.sendBuffer();
  #endif
  
  #ifdef MODEL1
    display.drawStr(0, 22, _deviceName.c_str());
    display.sendBuffer();
  #endif
  delay(2000);

  //Inisiasi LED
  ledStart();

  display.clearBuffer();
  display.drawStr(10, y1_, ("v" + FirmwareVer).c_str());
  display.sendBuffer();

  delay(500);

  ledcWrite(red, 100);
  ledcWrite(green, 0);
  ledcWrite(blue, 0);


  //when pressed button, change wifi
  while (1) {
    sec++;
    if (sec >= 50){
      sec=0;
      break;}
    delay(10);

  #ifdef MODEL2
      if (digitalRead(16) == 0) {
  
        display.clearBuffer();
        display.drawStr(0, y_, "Mengganti Wifi");
        display.drawStr(10, y1_, _deviceName.c_str());
        display.sendBuffer();
  
        delay(1000);
        gantiWifi();
      }
  #endif
  }

  ledcWrite(red, 0);
  ledcWrite(green, 0);
  ledcWrite(blue, 0);

  delay(10);

  //Set newborn ifinger  
  if (id_alat != 255)
    readSettingsFromEEPROM(ssid, pass);   // read the SSID and Passsword from the EEPROM
  else
    setAlatBaru();

  //Connecting wifi
  display.clearBuffer();
  display.setFont(u8g2_font_t0_18b_tf);
  display.drawStr(0, y_, "Menghubungkan");
  display.drawStr(0, y1_, ssid);
  display.sendBuffer();

  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    wifi_inc ++;
    if (wifi_inc > 10) {
      display.setFont(u8g2_font_t0_18b_tf);
      display.clearBuffer();
      display.drawStr(0, y_, " Gagal untuk");
      display.drawStr(0, y1_, " Terhubung");
      display.sendBuffer();
      delay(1000);
      modes = 1;

      display.clearBuffer();
      break;
    }
  }


  //Change wifi function
  int counter = 0;
  int s = 10;

  
  if (modes == 1) {
  #ifdef MODEL2
      display.clearBuffer();
      display.drawStr(0, y_, "Tekan Tombol");
      display.drawStr(0, y1_, "Untuk Ganti");
      display.sendBuffer();
  #endif
      while (1) {
        counter++; delay(10);
  #ifdef MODEL2
        if (counter % 100 == 0) {
          display.clearBuffer();
          display.drawStr(0, y_, "Tekan Tombol");
          display.drawStr(0, y1_, "Untuk Ganti");
          display.drawStr(64, y_ * 3, ((String)s).c_str());
          display.sendBuffer();
          s--;
        }
        if (digitalRead(16) == 0) {
          display.clearBuffer();
          display.drawStr(0, y_, "Mengganti Wifi");
          display.drawStr(10, y1_, _deviceName.c_str());
          display.sendBuffer();
          delay(1000);
          gantiWifi();
        }
  #endif
      if (counter >= 1000) {
        display.clearBuffer();
        display.drawStr(0, y_, "Mode Offline");
        display.drawStr(0, y1_, _deviceName.c_str());
        display.sendBuffer();
        mode_oled=4;
        delay(2000);
        break;
      }
    }
  }

  //Update Firmware
  if (wifi_inc < 10) {
    if (FirmwareVersionCheck()) {
      display.clearBuffer();
      display.drawStr(0, y_, " Updating");
      display.drawStr(0, y1_, "Firmware");
      display.sendBuffer();
      firmwareUpdate();
    }


  //show ip address of ifinger
    IPAddress ipa = WiFi.localIP();
    uint8_t IP_array[4]= {ipa[0],ipa[1],ipa[2],ipa[3]};
    String strIP =
      String(IP_array[2])+"."+
      String(IP_array[3]);
    display.clearBuffer();
    display.drawStr(0, y_, "Terhubung Wifi");
    display.drawStr(0, y1_, strIP.c_str());
    display.sendBuffer();
    wifi_inc = 0;
    delay(500);
  }


  //set id data 
  satuan  = byte(EEPROM.read(1));
  puluhan = byte(EEPROM.read(2));

  jumlahUrutan = (puluhan * 255) + satuan;

  
  /*//Activate this to Take datas from server
  if (modes == 0) {
    cek_nama(id_alat);
    cek_uname(id_alat);
    getCalDuty(id_alat);
    mode_lcd(id_alat);
  }*/
  
  setLed(0);

  display.clearBuffer();
  display.setFont(u8g2_font_t0_18b_tf);
  display.drawStr(0, y_, namanya.c_str());
  display.sendBuffer();
  delay(2000);

  display.clearBuffer();
  display.drawStr(0, y1_, "   Memulai    ");
  display.sendBuffer();
  delay(1000);

  sens[0] = analogRead(photo);

  //start ftp mode
  filemgr.begin();
  filemgr.setBackGroundColor("Gray");

  if (!MDNS.begin(host)) {
    while (1) {
      display.clearBuffer();
      display.drawStr(0, y_, "Gagal Host");
      display.sendBuffer();
    }
  }


  //start server mode
  server.on("/modeup", HTTP_GET, []() {
    server.sendHeader("Connection", "close");
    server.send(200, "text/html", serverIndex);
  });

  server.on("/update", HTTP_POST, []() {
    server.sendHeader("Connection", "close");
    server.send(200, "text/plain", (Update.hasError()) ? "FAIL" : "OK");
    ESP.restart();
  }, []() {
    HTTPUpload& upload = server.upload();
    if (upload.status == UPLOAD_FILE_START) {

      display.clearBuffer();
      display.drawStr(0, y_, "Memperbaharui");
      display.drawStr(0, y1_, "  Firmware");
      display.sendBuffer();

      if (!Update.begin(UPDATE_SIZE_UNKNOWN)) {
      }
    } else if (upload.status == UPLOAD_FILE_WRITE) {
      /* flashing firmware to ESP*/
      if (Update.write(upload.buf, upload.currentSize) != upload.currentSize) {
      }
    } else if (upload.status == UPLOAD_FILE_END) {
      if (Update.end(true)) { //true to set the size to the current progress
      } else {
      }
    }
  });
  server.begin();
}


//Begin of program
/*Program Utama*/
void loop() {

  //start mode server and ftp
  server.handleClient();
  filemgr.handleClient();

  
  /*if (modes == 1) {*/
  //bluetooth mode
    if (SerialBT.connected())
    { modes=1;
      if(btOn==0){btOn=1;
      display.clearBuffer();
      display.setFont(u8g2_font_t0_18b_tf);
      display.drawStr(0, y_, "Connect dg HP");
      display.sendBuffer();
      delay(1000);}

      display.clearBuffer();
      display.setFont(u8g2_font_t0_18b_tf);
      display.drawStr(0, y_, "Masukkan Jari    ");
      display.sendBuffer();
      if (!_headerSent) {

        uint8_t _bufHeader[_deviceName.length()];
        memcpy(_bufHeader, _deviceName.c_str(), _deviceName.length());

        SerialBT.write(_bufHeader, _deviceName.length());

        _headerSent = true;
      }

      if (_headerSent && !_headerVerified) {
        if (SerialBT.available()) {
          String readVerification = SerialBT.readString();

          if (readVerification.equals(_deviceName))
            _headerVerified = true;
        }
      }

      if (_headerVerified) {
        if (analogRead(photo) > sens[0] + thresDown)
        {
          display.clearBuffer();
          display.drawStr(0, y_, "Jari Terdeteksi");
          display.sendBuffer();
          delay(3000);

          for (int y = 0; y < 3; y++) {
            display.clearBuffer();
            display.drawStr(1, 16, ((String)(3 - y)).c_str());
            display.sendBuffer();
            delay(1000);
          }
          if (mode_oled >= 0 && mode_oled <= 3)
            dapatData_();
            else dapatData_();
            setLed(0);btOn=0;modes=0;
            _headerSent = false;
            _headerVerified = false;
        }
      }
    }

    delay(20);
  /*}*/

  
  //Show data from analog sensor
  if (mode_oled == 12) { 
    for (int f = 0; f < 3; f++) {
      setLed(f);
      delay(1000);
      for (int i = 0; i < 200; i++)
        display.clearBuffer();
        display.drawStr(0, y_, (penanda[f] + (String)analogRead(photo)).c_str());
        display.sendBuffer();
      delay(100);
    }
  }
  
 //Ambil data (harusnya) pake prepros
  else if (mode_oled >= 0 && mode_oled <= 3) {
    if (mode_oled == 2) {
      display.clearBuffer();
      display.drawStr(0, y_, ((String)analogRead(photo)).c_str());
      display.sendBuffer();
    }
    else {
      display.clearBuffer();
      display.setFont(u8g2_font_t0_18b_tf);
      display.drawStr(0, y_, "Masukkan Jari");
      display.sendBuffer();
    }

    if (analogRead(photo) > sens[0] + thresDown)
    {
      display.clearBuffer();
      display.setFont(u8g2_font_t0_18b_tf);

      if (type == 0)
        display.drawStr(0, y_, ("IG:" + (String)jumlahUrutan).c_str());
      if (type == 1)
        display.drawStr(0, y_, ("IH:" + (String)jumlahUrutan).c_str());
      if (type == 2)
        display.drawStr(0, y_, ("IC:" + (String)jumlahUrutan).c_str());
      if (type == 3)
        display.drawStr(0, y_, ("IU:" + (String)jumlahUrutan).c_str());
      display.sendBuffer();
      delay(3500);

      for (int y = 0; y < 3; y++) {
        display.clearBuffer();
        display.drawStr(1, 16, ((String)(3 - y)).c_str());
        display.sendBuffer();
        delay(500);
      }

      dapatData_();//Aslinya pake prepos [dapatData()]
      setLed(0);
    }
  }
  
  //Ambil data tanpa prepros
  else if (mode_oled > 3) {
    if (mode_oled == 5) {
      display.clearBuffer();
      display.drawStr(0, y_, ((String)analogRead(photo)).c_str());
      display.sendBuffer();
    }
    else {
      display.clearBuffer();
      display.setFont(u8g2_font_t0_18b_tf);
      display.drawStr(0, y_, "Masukkan Jari");
      display.sendBuffer();
    }
    if (analogRead(photo) > sens[0] + thresDown)
    {
      display.clearBuffer();
      display.setFont(u8g2_font_t0_18b_tf);

      if (type == 0)
        display.drawStr(0, y_, ("IG:" + (String)jumlahUrutan).c_str());
      if (type == 1)
        display.drawStr(0, y_, ("IH:" + (String)jumlahUrutan).c_str());
      if (type == 2)
        display.drawStr(0, y_, ("IC:" + (String)jumlahUrutan).c_str());
      if (type == 3)
        display.drawStr(0, y_, ("IU:" + (String)jumlahUrutan).c_str());
      display.sendBuffer();
      delay(3500);

      for (int y = 0; y < 3; y++) {
        display.clearBuffer();
        display.drawStr(1, 16, ((String)(3 - y)).c_str());
        display.sendBuffer();
        delay(500);
      }
      dapatData_();
      setLed(0);
    }
  }

  //memulai mode deepsleep
  #ifdef MODEL2
    if (digitalRead(0) == 0)
    {
      ++cnt;
      if (cnt == 2) {
        bootCount = 0;
        cnt = 0;
        display.clearBuffer();
        display.setFont(u8g2_font_t0_18b_tf);
        display.drawStr(0, y_, "");
        display.sendBuffer();
        esp_deep_sleep_start();
      }
    }
  
    if (digitalRead(16) == 0)
    {
      if (mode_oled == 10) 
        mode_oled = 4;
        
        display.clearBuffer();
        display.setFont(u8g2_font_t0_18b_tf);
        display.drawStr(0, y_, "    Proses ");
        display.drawStr(0, y1_, "   Kalibrasi");
        display.sendBuffer();
        delay(2000);
        
        uji_kalibrasi(5);
    }
  #endif
}

//## Get Data no prepros
//Proses mendapatkan data (2)
void dapatData_(void) {
  int n = 0;
  bool mark=true;
  if (mode_oled != 6) {
    display.clearBuffer();
    display.drawStr(0, y1_, " Mengambil");
    display.sendBuffer();
  }

  //reset all variable
  klir();
  bool flag = true;
  while (1)
  {
    //Begin readSensor
    readingSens(photo);
    
    if (flag_ == 0)  {
      //Nothing to change in display
    }
    
    //skipping for 10 first data (to avoid bug when using slope in 10 datas
    if (flag) {
      if (n > 10) {
        n = 0;
        for (int thisReading = 0; thisReading < 210; thisReading++) {
          dataRead[thisReading] = 0;
        }
        flag = false;
      }
    }

    //after skip 10 data
    else {
      //sens[flag_ + 3] = sens[flag_ + 3] + (int)(average/3300.0 * 4095.0);

      //buffer data to be calculate all in one variable
      sens[flag_ + 3] = sens[flag_ + 3] + (int)(average + 177);

      //save data in array each value (1-200)
      listArr[n] = (int)(average + 177);

      //get processed data in average mode
      dataRead[n] = average;

      //buffer data to be calculate all in a string
      Buffer = Buffer + (String)((int)average + 177) + ";";

      //buffer data to be calculate all in a string but in analog value (non voltage)
      Buffer1 = Buffer1 + (String)(int)(analogRead(photo) / 4095.0 * 3300.0) + ";";

      //in mode 5 show each value in oled by analog data
      if (mode_oled == 5) {
        if (n % 40 == 0) {
          display.clearBuffer();
          display.drawStr(0, y_, ((String)analogRead(photo)).c_str());
          display.sendBuffer();
        }
      }
      
      //in mode 6 show each value in oled by analog mV
      if (mode_oled == 6) {
        if (n % 40 == 0) {
          display.clearBuffer();
          display.drawStr(0, y_, (((String)((int)(average) + 177)) + " mV").c_str());
          display.sendBuffer();
        }
      }
    }

    //switch receiving data each changing of light led (R,G,B)
    if (n >= 200) {
      incr = 0;
      flag = true;

      //sorting data
      bubbleSort(listArr,200);

      //getting features      
      fiturs[0+flag*7] = zcross(listArr);
      fiturs[1+flag*7] = mcross(listArr);
      fiturs[2+flag*7] = persentil(listArr,5,10);
      fiturs[3+flag*7] = persentil(listArr,25,50);    
      fiturs[4+flag*7] = persentil(listArr,75,150);    
      fiturs[5+flag*7] = persentil(listArr,95,190);    
      fiturs[6+flag*7] = persentil(listArr,50,100);   

      //increment the led id
      flag_ = flag_ + 1;

      //reset all variable
      clearArray(listArr,ARRAY_SIZE);
      klir();
      n = 0;
      

      //when val 6 show teks "mengambil"
      if (mode_oled != 6) {
        if (flag_ == 1) {
          display.clearBuffer();
          display.drawStr(0, y1_, " Mengambil.");
          display.sendBuffer();
        }
        else if (flag_ == 2) {
          display.clearBuffer();
          display.drawStr(0, y1_, "Mengambil..");
          display.sendBuffer();

        }
      }

      //if done all, average data
      if (flag_ > 2) {
        x[0] = (int)(sens[3] / 200.0);
        x[1] = (int)(sens[4] / 200.0);
        x[2] = (int)(sens[5] / 200.0);

        sens[3] = (sens[3] / 200.0);
        sens[4] = (sens[4] / 200.0);
        sens[5] = (sens[5] / 200.0);


        //done
        display.clearBuffer();
        display.drawStr(0, y1_, "Selesai");
        display.sendBuffer();

        delay(2000);

        //switching rgb to be gbb (used in predict model)
        float bekas = x[0];
        x[0] = x[1];
        x[1] = x[2];

        //doing this when val oled are 4,5, or 6
        if (mode_oled == 4 || mode_oled == 5 || mode_oled == 6) {

        //#2 IFNDEFIHEART (cert.h) (HERE)
        
        #ifdef IHEART
            display.clearBuffer();
            val = ((int)model_pred.predict(x));
            x[1] = x[0];
            x[0] = bekas;
 
            float avg = x[1] - x[2];
            int result=0;
            for(int y=0;y<8;y++)
              result = result + (fiturs[usedFitur[y]]*Sys_x_n[y]);
            hasil_predik = (String)(result+intercept[0]);
            hasil_predik1 = hasil_predik1 + "," + hasil_predik ;
            display.drawStr(0, y1_, ("Sys : " + hasil_predik + " mmHg").c_str());
            
            result=0;
            for(int y=0;y<8;y++)
              result = result + (fiturs[usedFitur[y]]*Dia_x_n[y]);
            hasil_predik = (String)(result+intercept[1]);
            hasil_predik1 = hasil_predik1 + "," + hasil_predik ;
            display.drawStr(0, y_, ("Dia : " + hasil_predik + " mmHg").c_str());

            result=0;  
            for(int y=0;y<8;y++)
              result = result + (fiturs[usedFitur[y]]*Hr_x_n[y]);
            hasil_predik = (String)(result+intercept[2]);
            hasil_predik1 = hasil_predik1 + "," + hasil_predik ;
            
            display.drawStr(0, y_ * 3, ("HR: " + hasil_predik + " bpm").c_str());
            display.sendBuffer();
            delay(5000)  ;
        #endif
        }
        //setting data to be stored in sdcard
        String path = "/" + (String)jumlahUrutan + ".txt";
        writeFile(SD_MMC, path.c_str(), (Buffer + "," + hasil_predik).c_str()); //mV
        path = "/" + (String)jumlahUrutan + "_1.txt";
        writeFile(SD_MMC, path.c_str(), (Buffer1 + "," + hasil_predik).c_str());//analog
        
        //store data of average rgb in x variable
        x[0] = sens[3];
        x[1] = sens[4];
        x[2] = sens[5];

        sens[3] = 0; sens[4] = 0; sens[5] = 0;

        //send data to server
        send_Data();
        val = 0;

        satuan++;

        //increment of id data and set it in eeprom
        if (satuan > 255) {
          puluhan++;
          satuan = 1;
        }jumlahUrutan = (puluhan * 255) + satuan;
        EEPROM.write(1, satuan);
        EEPROM.write(2, puluhan);
        EEPROM.commit();

        
        delay(3000);
        display.clearBuffer();

        //reset all variable
        flag_ = 0;
        klir();
        break;
      }
    }
    //switching led
    setLed(flag_);

    //increment n data
    n++;
    delay(10);
  }
  flag = true;
}








//##Function bottom
//================================ALL needed Function======================================

//fungsi led
void setLed(int num) {
  if (num == 0) {
      ledcWrite(red, pwm_r);
      ledcWrite(green, 0);
      ledcWrite(blue, 0);
    }
  if (num == 1) {
      ledcWrite(green, pwm_g);
      ledcWrite(red, 0);
      ledcWrite(blue, 0);
  }
  if (num == 2) {
      ledcWrite(blue, pwm_b);
      ledcWrite(green, 0);
      ledcWrite(red, 0);
  }
}

/*Reset semua variabel*/
void klir() {
  incr = 0;
  for (int thisReading = 0; thisReading < 210; thisReading++) {
    dataRead[thisReading] = 0;
  }
  for (int thisReading = 0; thisReading < 10; thisReading++) {
    readings[thisReading] = 0;
  }
  readIndex = 0;              // the index of the current reading
  total = 0;                  // the running total
  average = 0;                // the average
}



int zcross(int arr[]) {
  int zero_crossing_count = 0; // Variable to keep track of the number of zero crossings

  // Find zero crossing indices
  for (int i = 1; i < ARRAY_SIZE; i++) {
    if ((arr[i-1] > 0 && arr[i] <= 0) || (arr[i-1] <= 0 && arr[i] > 0)) {
      zero_crossing_count++;
    }
  }
 return zero_crossing_count;
  
}


int mcross(int arr[]){
  int mean_crossing_count = 0; // Variable to keep track of the number of mean crossings

  // Calculate the mean value
  float mean_value = 0;
  for (int i = 0; i < ARRAY_SIZE; i++) {
    mean_value += arr[i];
  }
  mean_value /= ARRAY_SIZE;
  

  // Find mean crossing indices
  for (int i = 1; i < ARRAY_SIZE; i++) {
    if ((arr[i-1] > mean_value && arr[i] <= mean_value) || (arr[i-1] <= mean_value && arr[i] > mean_value)) {
      mean_crossing_count++;
    }
  }
 return mean_crossing_count;
}



void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-i-1; j++) {
      if (arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

void clearArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = 0;
  }
}

int persentil(int arr[],int m,int n){
//    bubbleSort(arr,200);
    int persentilIndex = m * (float)n/100;
    int persentil = arr[persentilIndex];
    return persentil;
}

//void tampilOLED(int i,char* teks){
//      display.clearBuffer();
//      display.drawStr(0, i,teks);
//      display.sendBuffer();
//}

void firmwareUpdate(void) {
  WiFiClientSecure client;
  client.setCACert(rootCACertificate);
  delay(100);
  t_httpUpdate_return ret = httpUpdate.update(client, URL_fw_Bin);

  switch (ret) {
    case HTTP_UPDATE_FAILED:
      break;

    case HTTP_UPDATE_NO_UPDATES:
      break;

    case HTTP_UPDATE_OK:
      display.clearBuffer();
      display.drawStr(0, y_, "Selesai Update");
      display.sendBuffer();
      delay(5000);
      break;
  }
}

int FirmwareVersionCheck(void) {
  String payload;
  int httpCode;
  String fwurl = "";
  fwurl += URL_fw_Version;
  fwurl += "?";
  fwurl += String(rand());
  WiFiClientSecure * client = new WiFiClientSecure;

  if (client)
  {
    client -> setCACert(rootCACertificate);
    HTTPClient https;

    if (https.begin( * client, fwurl))
    {
      delay(100);
      httpCode = https.GET();
      delay(100);
      if (httpCode == HTTP_CODE_OK) // if version received
      {
      payload = https.getString(); // save received version
      display.clearBuffer();
      display.drawStr(0, y_,((String)payload).c_str());
      display.sendBuffer();
      delay(1000);
        
      }
      https.end();
    }
    delete client;
  }

  if (httpCode == HTTP_CODE_OK) // if version received
  {
    payload.trim();
    if (payload.equals(FirmwareVer)) {
      return 0;
    }
    else
    {
      display.clearBuffer();
      display.drawStr(0, y_, "Ada Update");
      display.sendBuffer();
      delay(1000);
      return 1;
    }
  }
  return 0;
}


void readingSens(int sensr) {
  total = total - readings[readIndex];
  readings[readIndex] = (int)(analogRead(sensr) / 4095.0 * 3300.0);
  total = total + readings[readIndex];
  readIndex = readIndex + 1;

  if (readIndex >= numReadings) {
    readIndex = 0;
  }

  average = total / numReadings;
  delay(1);
}


//Regist awal alat saat belum terdaftar
void setAlatBaru() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    String serverPath = server_daftar + "?type=" + (String)type;
    http.begin(serverPath.c_str());
    int httpResponseCode = http.GET();

    if (httpResponseCode > 0) {
      String payload = http.getString();
      id_alat = payload.toInt();
    }
    http.end();
  }
  EEPROM.write(0, id_alat);//id
  EEPROM.write(1, 0);//satuan
  EEPROM.write(2, 0);//puluhan
  EEPROM.commit();
  saveSettingsToEEPPROM(ssid, pass);
}

void cek_nama(int id) {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    String serverPath = server_cek_nama + "?id=" + (String)id;
    http.begin(serverPath.c_str());
    int httpResponseCode = http.GET();

    if (httpResponseCode > 0) {
      namanya = http.getString();
    }
    http.end();
  }
}

//Mengecek Username yang dimiliki di server
void cek_uname(int id) {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    String serverPath = server_cek_uname + "?id=" + (String)id;
    http.begin(serverPath.c_str());
    int httpResponseCode = http.GET();

    if (httpResponseCode > 0) {
      uname = http.getString();
    }
    http.end();
  }
}


//Mendapat nilai PWM dari server
void get_pwm(int id) {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    String serverPath = server_get_pwm + "?id=" + (String)id;
    http.begin(serverPath.c_str());
    int httpResponseCode = http.GET();

    if (httpResponseCode > 0) {
      pwm_raw = http.getString();
      parse_(pwm_raw);
    }
    http.end();
  }
}
//Parsing data wifi
void parseWifi(String datae) {
  String data_ = datae;
  data_ = getValue(datae, ',', 0); data_.toCharArray(ssid, data_.length() + 1);
  data_ = getValue(datae, ',', 1); data_.toCharArray(mac, data_.length() + 1);
  data_ = getValue(datae, ',', 2); data_.toCharArray(pass, data_.length() + 1);
  pw = getValue(data_, ',', 2);
}

//Parsing data
void parse_(String datae) {
  String data_ = datae;
  pwm = getValue(data_, ';', 0);
  set_pnt = getValue(data_, ';', 1);
  thres = getValue(data_, ';', 2);

  pwm_r = (getValue(pwm, ',', 0)).toInt();
  pwm_g = (getValue(pwm, ',', 1)).toInt();
  pwm_b = (getValue(pwm, ',', 2)).toInt();

  std_red = (getValue(set_pnt, ',', 0)).toInt();
  std_green = (getValue(set_pnt, ',', 1)).toInt();
  std_blue = (getValue(set_pnt, ',', 2)).toInt();

  thresDown = (getValue(thres, ',', 0)).toInt();
  thresUp = (getValue(thres, ',', 1)).toInt();

}

//Parsing Data 2
String getValue(String data, char separator, int index)
{
  int found = 0;
  int strIndex[] = {0, -1};
  int maxIndex = data.length() - 1;

  for (int i = 0; i <= maxIndex && found <= index; i++) {
    if (data.charAt(i) == separator || i == maxIndex) {
      found++;
      strIndex[0] = strIndex[1] + 1;
      strIndex[1] = (i == maxIndex) ? i + 1 : i;
    }
  }

  return found > index ? data.substring(strIndex[0], strIndex[1]) : "";
}


//Mengirim nilai PWM , dan Set Point
void send_pwm() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    String serverPath = server_set_pwm + "?id=" + (String)id_alat + "&pwm=" + (String)pwm_r + "," + (String)pwm_g + "," + (String)pwm_b + ";" + (String)std_red + "," + (String)std_green + "," + (String)std_blue  + ";" + (String)sens[0] + "," + (String)sens[1] + "," + (String)sens[2] + ";" + (String)thresDown + "," + (String)thresUp;
    http.begin(serverPath.c_str());
    int httpResponseCode = http.GET();

    http.end();
  }
}

//Buffer data untuk pengiriman bluetooth
void __sendData(String bufferData) {
  String _dummyData = bufferData;
  //  Serial.println(_dummyData);

  uint8_t _bufBody[_dummyData.length()];
  memcpy(_bufBody, _dummyData.c_str(), _dummyData.length());

  SerialBT.write(_bufBody, _dummyData.length());
}

//Mengirim data pembacaan sensor
void send_Data() {
  //if(hasil_predik=="")hasil_predik="0";
  #ifndef IHEART
  String serverPath = server_send_data +
                      "?id=" + (String)jumlahUrutan  +
                      "&val=" + Buffer  +
                      "&pred=" + hasil_predik +
                      "&nilai=" + (String)((int)x[0]) + "," + (String)((int)(x[1])) + "," + (String)(int)(x[2]) + "," + (String)(int)(val) +
                      "&type=" + (String)type +
                      "&uname=" + id_alat +
                      "&user=1174";
  #else
  String  sys = (getValue(hasil_predik1, ',', 0));
  String  dia = (getValue(hasil_predik1, ',', 1));
  String  hr = (getValue(hasil_predik1, ',', 2));
      String serverPath = server_send_data +
                      "?id=" + (String)jumlahUrutan  +
                      "&val=" + Buffer  +
                      "&predSYS=" + sys +
                      "&predDIA=" + dia +
                      "&predHR=" + hr +
                      "&nilai=" + (String)((int)x[0]) + "," + (String)((int)(x[1])) + "," + (String)(int)(x[2]) + "," + "(" +  hasil_predik1 + ")" +
                      "&type=" + (String)type +
                      "&uname=" + id_alat +
                      "&user=1174";
  #endif
  if (modes == 0) {
    //connectWifi();
    if (WiFi.status() == WL_CONNECTED) {
      HTTPClient http;

      //http://202.157.187.107:8004/dari_alat/send.php?id=10&val=10&pred=100&type=2&uname=12
      http.begin(serverPath.c_str());
      int httpResponseCode = http.GET();
      http.end();
    }
  }
  else{
    //    (String)type +","+
    #ifndef IHEART
      hasil_predik1 = hasil_predik;
    #endif
    String buff = (String)id_alat + "," + (String)jumlahUrutan + "," + Buffer  + "," + hasil_predik1 + "\n";
    __sendData(buff);
    //      EEPROM.write(15,1);
    hitung_data_offline++;
    EEPROM.write(16, hitung_data_offline);
    EEPROM.commit();
  }
  writeFile(SD_MMC, "/server.txt", serverPath.c_str());
  Buffer = ""; Buffer1 = "";
}


//Proses Kalibrasi
void kalibrasi(void) {
  timeku = millis();
  setLed(flag_);
  int itung = 0;
  while (1) {
    Nilai_sensor = (analogRead(photo) / 4095.0 * 3300.0);
    if (status_kalibrasi == 5) {
      display.clearBuffer();
      display.drawStr(0, y_, (penanda[flag_] + String((int)(Nilai_sensor)) + " mV").c_str());
      display.sendBuffer();
      delay(100);
    }


    if (flag_ == 0) {
      if (Nilai_sensor < std_red)pwm_r++;
      else if (Nilai_sensor > std_red) pwm_r--;
      if (pwm_r <= 0)pwm_r = 0;
      if (pwm_r >= 4095)pwm_r = 4095;

      if (Nilai_sensor <= std_red + 20 && Nilai_sensor >= std_red - 20)
      {
        itung++;
        if (itung >= 10) {
          sens[flag_] = Nilai_sensor; flag_ = flag_ + 1; itung = 0; klir();
        }
      }
      setLed(flag_);
    }

    else if (flag_ == 1) {
      if (Nilai_sensor < std_green)pwm_g++;
      else if (Nilai_sensor > std_green)  pwm_g--;
      if (pwm_g <= 0)pwm_g = 0;
      if (pwm_g >= 4095)pwm_g = 4095;

      if (Nilai_sensor <= std_green + 20 && Nilai_sensor >= std_green - 20)
      {
        itung++;
        if (itung >= 10) {
          sens[flag_] = Nilai_sensor; flag_ = flag_ + 1; itung = 0; klir();
        }
      }
      x[flag_ - 1] = analogRead(photo);
      setLed(flag_);
    }
    else if (flag_ == 2) {
      if (Nilai_sensor < std_blue)pwm_b++;
      else if (Nilai_sensor > std_blue)  pwm_b--;
      if (pwm_b <= 0)pwm_b = 0;
      if (pwm_b >= 4095)pwm_b = 4095;

      if (Nilai_sensor <= std_blue + 20 && Nilai_sensor >= std_blue - 20)
      {
        itung++;
        if (itung >= 10) {
          sens[flag_] = Nilai_sensor; flag_ = flag_ + 1; itung = 0; klir();
        }
      }
      x[flag_ - 1] = analogRead(photo);
      setLed(flag_);
    }
    else {
      x[2] = analogRead(photo);
      flag_ = 0;

      String hasil = (String)pwm_r + "," + (String)pwm_g + "," + (String)pwm_b;
      String hasil1 = (String)sens[0] + "," + (String)sens[1] + "," + (String)sens[2];
      //          int std_red   = 2045;
      //          int std_green = 670;
      //          int std_blue  = 880;
      if (sens[0] >= (std_red - 75) && sens[0] <= (std_red + 75)) {
        if (sens[1] >= (std_green - 120) && sens[1] <= (std_green + 120)) {
          if (sens[2] >= (std_blue - 75) && sens[2] <= (std_blue + 75)) {
            display.clearBuffer();
            display.drawStr(0, y1_, predik_.c_str());
            display.sendBuffer();
            delay(5000)  ;
          }
        }
      }

      display.clearBuffer();
      setLed(flag_);
      klir();
      for (int thisReading = 0; thisReading < 210; thisReading++) {
        dataRead[thisReading] = 0;
      }
      break;
    }
    delay(1);
  }
}

//Mendapatkan info status kalibrasi
void getCalDuty(int id) {
  int payload;
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    String serverPath = server_cek_kalibrasi + "?id=" + (String)id;
    http.begin(serverPath.c_str());
    int httpResponseCode = http.GET();

    if (httpResponseCode > 0) {
      payload = (http.getString()).toInt();
      status_kalibrasi = payload;
      uji_kalibrasi(payload);
      http.end();
    }
  }
}


void bacaEEPROM_PWM(){
    pwm_r = EEPROM.read(6);
    pwm_r = pwm_r * 255 + EEPROM.read(3);

    pwm_g = EEPROM.read(7);
    pwm_g = pwm_g * 255 + EEPROM.read(4);

    pwm_b = EEPROM.read(8);
    pwm_b = pwm_b * 255 + EEPROM.read(5);
}

void tulisEEPROM_PWM(){
    EEPROM.write(6, (pwm_r - (pwm_r % 255)) / 255);
    EEPROM.write(7, (pwm_g - (pwm_g % 255)) / 255);
    EEPROM.write(8, (pwm_b - (pwm_b % 255)) / 255);

    EEPROM.write(3, pwm_r % 255);
    EEPROM.write(4, pwm_g % 255);
    EEPROM.write(5, pwm_b % 255);

    //        EEPROM.write(10,thresDown/16);
    //        EEPROM.write(11,thresUp/16);

    EEPROM.commit();
}

void uji_kalibrasi(int payload) {
  if (payload == 7) { //default
    bacaEEPROM_PWM();
  }
  else if (payload == 1) { //pwm set
    get_pwm(id_alat);
    display.clearBuffer();
    display.drawStr(0, y1_, "Memproses.");
    display.sendBuffer();
    delay(100);

  tulisEEPROM_PWM();

    for (int f = 0; f < 3; f++) {
      setLed(f);
      delay(1000);
      sens[f] = analogRead(photo);
    }
    send_pwm();

    display.clearBuffer();
    display.drawStr(0, y1_, "   Selesai");
    display.sendBuffer();
    delay(2000);
  }
  else if (payload == 2) { //std set
    get_pwm(id_alat);
    display.clearBuffer();
    display.drawStr(0, y1_, "  Kalibrasi..");
    display.sendBuffer();
    delay(100);

    kalibrasi();

    for (int f = 0; f < 3; f++) {
      setLed(f);
      delay(1000);
      sens[f] = analogRead(photo);
    }


    tulisEEPROM_PWM();

    send_pwm();

    String hasil = (String)sens[0] + "," + (String)sens[1] + "," + (String)sens[2];
    display.clearBuffer();
    display.drawStr(0, y_, hasil.c_str());
    display.sendBuffer();
    delay(5000);

    display.clearBuffer();
    display.drawStr(0, y1_, "  Selesai");
    display.sendBuffer();
    delay(2000);
  }
  else if (payload == 3) { //default std set
    display.clearBuffer();
    display.drawStr(0, y_, " Kalibrasi...");
    display.sendBuffer();
    delay(100);

    kalibrasi();

    tulisEEPROM_PWM();

    send_pwm();
    display.clearBuffer();
    display.drawStr(0, y1_, "Selesai");
    display.sendBuffer();
    delay(2000);
  }
  else if (payload == 4) //send pwm
  {
    bacaEEPROM_PWM();
    send_pwm();
  }
  else if (payload == 5) { //default std set
    display.clearBuffer();
    display.drawStr(0, y_, "Kalibrasi...");
    display.sendBuffer();
    delay(100);

    status_kalibrasi = 5;
    kalibrasi();

    tulisEEPROM_PWM();

    EEPROM.commit();

    send_pwm();

    delay(2000);
  }
  sens[0] = analogRead(photo);
}


void exit() {
  while (1) {
    if (digitalRead(0) == 0)
    {
      ++cnt;
      if (cnt > 5) {
        bootCount = 0;
        cnt = 0;
        display.clearBuffer();
        display.drawStr(0, y_, "");
        display.sendBuffer();
        esp_deep_sleep_start();
      }
    }
    if (digitalRead(16) == 0)
    {
      display.clearBuffer();
      display.setFont(u8g2_font_t0_18b_tf);
      display.drawStr(0, y1_, "Mode Kalibrasi");
      display.sendBuffer();
      
      status_kalibrasi = 5;
      uji_kalibrasi(5);
      ESP.restart();
    }
  }
}

void urutan_(int id) {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    String serverPath = server_cek_urutan + "?id=" + (String)id;
    http.begin(serverPath.c_str());
    int httpResponseCode = http.GET();
    int result;
    if (httpResponseCode > 0) {
      String payload = http.getString();
      jumlahUrutan = payload.toInt();
      if (jumlahUrutan != 0)
      {
        satuan   = jumlahUrutan % 255;
        puluhan = (jumlahUrutan - satuan) / 255;

        EEPROM.write(1, satuan);
        EEPROM.write(2, puluhan);
        EEPROM.commit();
      }
      http.end();
    }
  }
}

void mode_lcd(int id) {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    String serverPath = server_cek_mode_lcd + "?id=" + (String)id;
    http.begin(serverPath.c_str());
    int httpResponseCode = http.GET();
    int result;
    if (httpResponseCode > 0) {
      String payload = http.getString();
      mode_oled = payload.toInt();
      EEPROM.write(9, mode_oled);
      EEPROM.commit();
      http.end();
    }
  }
}


void gantiWifi() {
  while (1) {
    if (digitalRead(0) == 0 )ESP.restart();
    if (SerialBT.connected())
    {
      // First, send data to mobile app to confirm that this is the valid IGluco
      if (!_headerSent) {
        //      Serial.println("Sending Header...");

        // ! USE _wifiName HERE
        String _headerStr = _deviceName + "," + ssid;
        uint8_t _bufHeader[_headerStr.length()];
        memcpy(_bufHeader, _headerStr.c_str(), _headerStr.length());

        SerialBT.write(_bufHeader, _headerStr.length());

        _headerSent = true;
      }

      if (_headerSent && !_measurement && !_wifi) {
        //      Serial.println("Reading Header Verivicator...");

        if (SerialBT.available()) {
          String readHeader = SerialBT.readString();
          //        Serial.println("READ: "+readHeader);

          if (readHeader.equals(_deviceName))
            _measurement = true;
          else if (readHeader.startsWith("wifi")) {
            _wifi = true;

            int idx = readHeader.indexOf(":");
            _wifiData = readHeader.substring(idx + 1, readHeader.length());
            parseWifi(_wifiData);
            _wifiName = _wifiData.substring(0, _wifiData.indexOf(","));
          }
          else if (readHeader.startsWith("info")) {
            sleep(2);
            SerialBT.disconnect();
          }
        }
      }

      if (_measurement && !_wifi) {
        String readSerial = "";
        if (readSerial == "\n") {
          //        Serial.println("Sending Data...");

          //        __sendData();
        }
      }

      if (_wifi) {
        saveSettingsToEEPPROM(ssid, pass);
        SerialBT.println("wifi:success");
        display.clearBuffer();
        display.drawStr(0, y_, "Berhasil");
        display.drawStr(0, y1_, "Diganti");
        display.sendBuffer();
        delay(2000);
        _wifi = false;
        SerialBT.disconnect();
        ESP.restart();
      }
    }
    else
    {
      _headerSent = false;
      _measurement = false;
      _wifi = false;
    }

    delay(20);
  }
}

void writeFile(fs::FS &fs, const char * path, const char * message) {
  File file = fs.open(path, FILE_WRITE);
  if (!file) {
    return;
  }
  if (file.print(message)) {
  }
}

void writeEEPROM(int startAdr, int length, char* writeString) {
  yield();
  for (int i = 0; i < length; i++) EEPROM.write(startAdr + i, writeString[i]);
  EEPROM.commit();
}

void saveSettingsToEEPPROM(char* ssid_, char* pass_) {
  writeEEPROM(1 * eepromTextVariableSize , eepromTextVariableSize , ssid_);
  writeEEPROM(2 * eepromTextVariableSize , eepromTextVariableSize ,  pass_);
}

void readEEPROM(int startAdr, int maxLength, char* dest) {
  delay(10);
  for (int i = 0; i < maxLength; i++) dest[i] = char(EEPROM.read(startAdr + i));
  dest[maxLength - 1] = 0;
}

void readSettingsFromEEPROM(char* ssid_, char* pass_) {
  readEEPROM( 1 * eepromTextVariableSize , eepromTextVariableSize , ssid_);
  readEEPROM( (2 * eepromTextVariableSize) , eepromTextVariableSize , pass_);
}

void ledStart(){
  ledcSetup(red,    freq, resolution);
  ledcSetup(green,  freq, resolution);
  ledcSetup(blue,   freq, resolution);

  ledcAttachPin(red_, red);
  ledcAttachPin(green_, green);
  ledcAttachPin(blue_, blue);

  ledcWrite(red, 0);
  ledcWrite(green, 0);
  ledcWrite(blue, 0);

  delay(100);

  ledcWrite(red, 100);
  delay(10);

  sens[0] = analogRead(photo);
  delay(1000);

  ledcWrite(red, pwm_r);
  ledcWrite(green, 0);
  ledcWrite(blue, 0);
  delay(500);

  ledcWrite(green, pwm_g);
  ledcWrite(red, 0);
  ledcWrite(blue, 0);
  delay(10);

  ledcWrite(blue, pwm_b);
  ledcWrite(green, 0);
  ledcWrite(red, 0);
  delay(10);
}

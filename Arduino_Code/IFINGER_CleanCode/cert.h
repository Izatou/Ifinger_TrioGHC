#ifndef CERT_H

#define CERT_H

//DigiCert root certificate has expiry date of 10 Nov 2031
const char * rootCACertificate = \
"-----BEGIN CERTIFICATE-----\n" \
"MIIDrzCCApegAwIBAgIQCDvgVpBCRrGhdWrJWZHHSjANBgkqhkiG9w0BAQUFADBh\n" \
"MQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3\n" \
"d3cuZGlnaWNlcnQuY29tMSAwHgYDVQQDExdEaWdpQ2VydCBHbG9iYWwgUm9vdCBD\n" \
"QTAeFw0wNjExMTAwMDAwMDBaFw0zMTExMTAwMDAwMDBaMGExCzAJBgNVBAYTAlVT\n" \
"MRUwEwYDVQQKEwxEaWdpQ2VydCBJbmMxGTAXBgNVBAsTEHd3dy5kaWdpY2VydC5j\n" \
"b20xIDAeBgNVBAMTF0RpZ2lDZXJ0IEdsb2JhbCBSb290IENBMIIBIjANBgkqhkiG\n" \
"9w0BAQEFAAOCAQ8AMIIBCgKCAQEA4jvhEXLeqKTTo1eqUKKPC3eQyaKl7hLOllsB\n" \
"CSDMAZOnTjC3U/dDxGkAV53ijSLdhwZAAIEJzs4bg7/fzTtxRuLWZscFs3YnFo97\n" \
"nh6Vfe63SKMI2tavegw5BmV/Sl0fvBf4q77uKNd0f3p4mVmFaG5cIzJLv07A6Fpt\n" \
"43C/dxC//AH2hdmoRBBYMql1GNXRor5H4idq9Joz+EkIYIvUX7Q6hL+hqkpMfT7P\n" \
"T19sdl6gSzeRntwi5m3OFBqOasv+zbMUZBfHWymeMr/y7vrTC0LUq7dBMtoM1O/4\n" \
"gdW7jVg/tRvoSSiicNoxBN33shbyTApOB6jtSj1etX+jkMOvJwIDAQABo2MwYTAO\n" \
"BgNVHQ8BAf8EBAMCAYYwDwYDVR0TAQH/BAUwAwEB/zAdBgNVHQ4EFgQUA95QNVbR\n" \
"TLtm8KPiGxvDl7I90VUwHwYDVR0jBBgwFoAUA95QNVbRTLtm8KPiGxvDl7I90VUw\n" \
"DQYJKoZIhvcNAQEFBQADggEBAMucN6pIExIK+t1EnE9SsPTfrgT1eXkIoyQY/Esr\n" \
"hMAtudXH/vTBH1jLuG2cenTnmCmrEbXjcKChzUyImZOMkXDiqw8cvpOp/2PV5Adg\n" \
"06O/nVsJ8dWO41P0jmP6P6fbtGbfYmbW0W5BjfIttep3Sp+dWOIrWcBAI+0tKIJF\n" \
"PnlUkiaY4IBIqDfv8NZ5YBberOgOzW6sRBc4L0na4UU+Krk2U886UAb3LujEV0ls\n" \
"YSEY1QSteDwsOoBrp+uvFRTp2InBuThs4pFsiv9kuXclVzDAGySj4dzp30d8tbQk\n" \
"CAUw7C29C79Fv1C5qfPrmAESrciIxpg0X40KPMbp1ZWVbd4=\n" \
"-----END CERTIFICATE-----\n";

#endif

//===================================
/*
//rumus
//AU = 1.180278728 + (RED * 0.000935422) + (GREEN * -0.006456886) + ( BLUE * 0.012698668)
//CL = 113.0734919 + (RED * 0.0110266) + (GREEN * -0.060925346) + ( BLUE * 0.1889824)

  String serverIndex(uint8_t st) {
  String ptr = "<!DOCTYPE html> <html>\n";
  ptr += "<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=no\">\n";
  ptr += "<title>ESP WiFi Manager</title>\n";
  ptr += "<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}\n";
  ptr += "body{margin-top: 50px;} h1 {color: #444444;margin: 30px auto 30px;} h3 {color: #444444;margin-bottom: 50px;}\n";
  ptr += "label{display:inline-block;width: 160px;text-align: right;}\n";
  ptr += "form{margin: 0 auto;width: 360px;padding: 1em;border: 1px solid #CCC;border-radius: 1em; background-color: #6e34db;}\n";
  ptr += "input {margin: 0.5em;}\n";
  if (st == 1) ptr += "h3{color: green;}\n";
  ptr += "</style>\n";
  ptr += "<meta charset=\"UTF-8\">\n";
  ptr += "</head>\n";
  ptr += "<body>\n";
  ptr += "<h1>ESP WiFi Manager Using EEPROM</h1>\n";
  if (st == 1)ptr += "<h3>WiFi settings has saved successfully!</h3>\n";
  else if (st == 2)ptr += "<h3>WIFI Credentials has saved successfully!</h3>\n";
  else ptr += "<h3>Enter the WiFi settings</h3>\n";
  ptr += "<form>";

  ptr += "<div><label for=\"label_1\">WiFi SSID</label><input id=\"ssid_id\" required type=\"text\" name=\"ssid\" value=\"";
  ptr += ssid;
  ptr += "\" maxlength=\"32\"></div>\n";
  ptr += "<div><label for=\"label_1\">WiFi PASS</label><input id=\"ssid_id\" required type=\"text\" name=\"pass\" value=\"";
  ptr += pass;
  ptr += "\" maxlength=\"32\"></div>\n";

  ptr += "<div><label for=\"label_1\">ID alat</label><input id=\"ssid_id\" required type=\"text\" name=\"id_alat\" value=\"";
  ptr += id_alat;
  ptr += "\" maxlength=\"32\"></div>\n";

  ptr += "<div><label for=\"label_1\">PWM R1</label><input id=\"ssid_id\" required type=\"text\" name=\"r1\" value=\"";
  ptr += r1;
  ptr += "\" maxlength=\"32\"></div>\n";

  ptr += "<div><label for=\"label_2\">PWM R2</label><input id=\"pass_id\" type=\"text\" name=\"r2\" value=\"";
  ptr += r2;
  ptr += "\" maxlength=\"32\"></div>\n";

  ptr += "<div><label for=\"label_2\">PWM G1</label><input id=\"pass_id\" type=\"text\" name=\"g1\" value=\"";
  ptr += g1;
  ptr += "\" maxlength=\"32\"></div>\n";
  ptr += "<div><label for=\"label_2\">PWM G2</label><input id=\"pass_id\" type=\"text\" name=\"g2\" value=\"";
  ptr += g2;
  ptr += "\" maxlength=\"32\"></div>\n";

  ptr += "<div><label for=\"label_2\">PWM B2</label><input id=\"pass_id\" type=\"text\" name=\"b1\" value=\"";
  ptr += b1;
  ptr += "\" maxlength=\"32\"></div>\n";
  ptr += "<div><label for=\"label_2\">PWM B2</label><input id=\"pass_id\" type=\"text\" name=\"b2\" value=\"";
  ptr += b2;
  ptr += "\" maxlength=\"32\"></div>\n";

  ptr += "<div><input type=\"submit\" value=\"Submit\"accesskey=\"s\"></div></form>";
  ptr += "<h5></h5>\n";
  ptr += "</body>\n";
  ptr += "</html>\n";
  return ptr;
  }
  
  void readFile(fs::FS &fs, const char * path) {
  Buffer = ""; Buffer1 = "";

  File file = fs.open(path);
  if (!file) {
    return;
  }
  while (file.available()) {
    Buffer += file.read();
  }
  send_Data();
  Buffer = ""; Buffer1 = "";
}


/*
  void writeFile(fs::FS &fs, String path, const char * message){
    String savePath = "/" + path + ".txt";;
    for(int i=0;i<100;i++){
      if(SD_MMC.exists(savePath))
        savePath = "/" + path + "(" + (String)i + ")"  + ".txt";
      else
        break;
    }

    File file = fs.open(path, FILE_WRITE);
    if(!file){
        return;
    }
    if(file.print(message)){
    }
  }
void connectWifi() {
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    wifi_inc ++;
    if (wifi_inc > 10) {
      display.setFont(u8g2_font_t0_18b_tf);
      display.clearBuffer();
      display.drawStr(0, y1_, "Gagal Terhubung");
      display.sendBuffer();
      delay(1000);

      display.clearBuffer();
      display.drawStr(0, y1_, "Mode Offline");
      display.sendBuffer();
      delay(1000);

      break;
    }
    if (wifi_inc < 10) {
      wifi_inc = 0;
      delay(500);
    }
  }
  delay(100);
}


    //    if (hitung_data_offline > 0)
    //      kirimDataOffline();


  void kirimDataOffline() {
  String savePath = "";
  for (int i = 0; i < hitung_data_offline; i++) {
    savePath = "/" + (String)(jumlahUrutan - i) + ".txt";;
    readFile(SD_MMC, savePath.c_str());
  }
  EEPROM.write(15, 0);
  EEPROM.write(16, 0);
  EEPROM.commit();
}
  
  */
/*
 * Unused Syntax*
 * Eloquent::ML::Port::GD model_pred;
 * #include "model/modelNew_GD.h";
 */

 /*Kalibrator Kontrol mV
int std_red   = 2935;//3643;
int std_green = 486;//603;
int std_blue  = 284;//353;


*/


/*
 *int std_red_1   = 2050;
 *int std_green_1 = 850;
 *int std_blue_1  = 1100;
*/

/*
 * Kalibrator Kontrol ADC
 * int std_red   = 2045;
 * int std_green = 670;
 * int std_blue  = 880;
 */
/*
  //#include "model/RFNew.h"
  //Eloquent::ML::Port::DecisionTree model_pred;*/




//# Get data prepros
/*Proses mendapatkan data dengan prepros
void dapatData(void) {
  int n = 0;
  display.clearBuffer();
  display.drawStr(0, y1_, "Mengambil");
  display.sendBuffer();

  klir();
  bool flag = true;
  while (1)
  {
    readingSens(photo);
    if (flag_ == 0)  {
      if (analogRead(photo) < sens[0] + thresDown) {
        sens[3] = 0; sens[4] = 0; sens[5] = 0;
        display.clearBuffer();
        display.drawStr(0, y_, "  Ulangi");
        display.drawStr(0, y1_, "Pengambilan.");
        display.sendBuffer();
        delay(2000);
        flag_ = 0;
        incr = 0;
        Buffer = ""; Buffer1 = "";
        break;
      }
      if (analogRead(photo) > thresUp) {
        sens[3] = 0; sens[4] = 0; sens[5] = 0;
        display.clearBuffer();
        display.drawStr(0, y_, "  Ulangi");
        display.drawStr(0, y1_, "Pengambilan..");
        display.sendBuffer();
        delay(2000);
        flag_ = 0;
        incr = 0;
        Buffer = ""; Buffer1 = "";
        break;
      }

    }
    if (flag) {
      if (n > 10) {
        n = 0;
        for (int thisReading = 0; thisReading < 210; thisReading++) {
          dataRead[thisReading] = 0;
        }
        flag = false;
      }
    }

    else {
      sens[flag_ + 3] = sens[flag_ + 3] + average;
      dataRead[n] = average;
      Buffer = Buffer + String(average) + ";";
      Buffer1 = Buffer1 + String((int)(analogRead(ADC_PIN) / 4095.0 * .0)) + ";";
      if (mode_oled == 2) {
        if (n % 20 == 0) {
          display.clearBuffer();
          display.drawStr(0, y_, ((String)analogRead(photo)).c_str());
          display.sendBuffer();
          incr=0;
        }
      }
      if (n > 10) {
        slope = abs((dataRead[n] - dataRead[n - 10]) / 10);
        if (slope > 8.0) {
          incr++;
        }
      }
      if (incr > 50) {
        sens[3] = 0; sens[4] = 0; sens[5] = 0;
        display.clearBuffer();
        display.drawStr(0, y_, "  Ulangi");
        display.drawStr(0, y1_, "Pengambilan..");
        display.sendBuffer();
        delay(1500);
        flag_ = 0;
        incr = 0;
        n = 0;
        Buffer = ""; Buffer1 = "";
        flag = true;
        break;
      }

      if (mode_oled == 3) {
        display.clearBuffer();
        display.drawStr(0, y_, ("Slope = " + (String)slope + ", " + (String)incr).c_str());
        display.sendBuffer();
      }

      if (n >= 200) {
        incr = 0;
        flag = true;
        flag_ = flag_ + 1;
        n = 0;
        klir();

        if (flag_ == 1) {
          if (mode_oled == 0 || mode_oled == 1) {
            display.clearBuffer();
            display.drawStr(0, y1_, "Mengambil.");
            display.sendBuffer();
          }
        }
        else if (flag_ == 2) {
          if (mode_oled == 0 || mode_oled == 1) {
            display.clearBuffer();
            display.drawStr(0, y1_, "Mengambil..");
            display.sendBuffer();
          }

        }
        else if (flag_ > 2) {
          x[0] = sens[3] / 200;
          x[1] = sens[4] / 200;
          x[2] = sens[5] / 200;

          sens[3] = 0; sens[4] = 0; sens[5] = 0;
          display.clearBuffer();
          display.drawStr(0, y1_, "    Selesai");
          display.sendBuffer();
          delay(2000);

    #ifndef IHEART
              if (x[0] >= (std_red - 400) && x[0] <= (std_red + 400)) {
                if (x[1] >= (std_green - 200) && x[1] <= (std_green + 200)) {
                  if (x[2] >= (std_blue - 200) && x[2] <= (std_blue + 200)) {
                    display.clearBuffer();
                    display.drawStr(0, y_, predik_.c_str());
                    display.sendBuffer();
                    delay(5000)  ;
                  }
                }
              }
    #endif
    
              if (mode_oled == 2 || mode_oled == 1 ) {
    #ifdef IHEART
                hasil_predik = (String)((int)model_dbp.predict(x)) ;
                hasil_predik1 = hasil_predik;
                String bpm = "HR:" + (String)((int)model_dbp.predict(x) + 5) + " bpm";
                display.clearBuffer();
                display.drawStr(0, y_, ("Dia : " + hasil_predik + " mmHg").c_str());
                hasil_predik = (String)((int)model_dbp.predict(x)) ;
                hasil_predik1 = hasil_predik1 + "," + hasil_predik;
                display.drawStr(0, y1_, ("Sys : " + hasil_predik + " mmHg").c_str());
                hasil_predik = (String)((int)model_hr.predict(x)) ;;
                hasil_predik1 = hasil_predik1 + "," + hasil_predik;
                display.drawStr(0, y_ * 3, ("HR: " + hasil_predik + " bpm").c_str());
                //              display.drawStr(0,48,bpm.c_str());
                display.sendBuffer();
                delay(5000)  ;
    #else
                hasil_predik = (String)((int)model_pred.predict(x)) ;
                display.clearBuffer();
                display.drawStr(0, y_, "Nilai :");
                display.drawStr(0, y1_, (" " + hasil_predik + " mg/dL").c_str());
                display.sendBuffer();
                delay(5000)  ;
    #endif
          }
          String path = "/" + (String)jumlahUrutan + ".txt";
          //        String path = (String)jumlahUrutan;
          writeFile(SD_MMC, path.c_str(), (Buffer + "," + hasil_predik).c_str());
          path = "/" + (String)jumlahUrutan + "_1.txt";
          writeFile(SD_MMC, path.c_str(), (Buffer1 + "," + hasil_predik).c_str());

          //send_Data();

          satuan++;

          if (satuan > 255) {
            puluhan++;
            satuan = 1;
          }
          EEPROM.write(1, satuan);
          EEPROM.write(2, puluhan);
          EEPROM.commit();

          jumlahUrutan = (puluhan * 255) + satuan;
          delay(3000);
          display.clearBuffer();
          flag_ = 0;
          klir();
          break;
        }
      }
    }
    setLed(flag_);
    n++;
    delay(20);
  }
}
*/

//#2 IFNDEFIHEART
  /*
  #ifndef IHEART
          if (x[0] >= ((std_red_1 + 177) - 200) && x[0] <= ((std_red_1 + 177) + 200)) {
            if (x[1] >= ((std_green_1 + 177) - 200) && x[1] <= ((std_green_1 + 177) + 200)) {
              if (x[2] >= ((std_blue_1 + 177) - 200) && x[2] <= ((std_blue_1 + 177) + 200)) {
                hasil_predik = (String)((int)model_pred.predict(x)) ;
                display.clearBuffer();
                display.drawStr(0, y_, predik_.c_str());
                display.sendBuffer();
                skip = 1;
                delay(5000)  ;
              }
            }
          }
          if (skip == 0) {
            if (x[0] >= ((std_red_1) - 200) && x[0] <= ((std_red_1) + 200)) {
              if (x[1] >= ((std_green_1) - 250) && x[1] <= ((std_green_1) + 250)) {
                if (x[2] >= ((std_blue_1) - 450) && x[2] <= ((std_blue_1) + 450)) {
                  val = ((int)model_pred.predict(x));
                  x[1] = x[0];
                  x[0] = bekas;
                  
                  if(type==0){  
                  float avg = x[1] - x[2];
                  
                  if(avg > 250){
                    if(val == 0) 
                      hasil_predik = (String)(int)(((float)x[0] * -0.012919107) + ((float)x[1] * 0.008141957) + ((float)x[2] * 0.015194451) + (val * 14.11696078) + 146.7363738);
                  }
                  else {
                    if(val == 0) 
                      hasil_predik = (String)(int)(((float)x[0] * -0.008896205) + ((float)x[1] * -0.00450833) + ((float)x[2] * -0.001395585) + (val * 14.11696078) + 126.886468);
                    else
                      hasil_predik = (String)(int)(((float)x[0] * -0.012919107) + ((float)x[1] * 0.008141957) + ((float)x[2] * 0.015194451) + (val * 14.11696078) + 146.7363738);
                    }
                  }
                  
                  else if(type==2)   
                    hasil_predik = (int)(113.0734919+(x[0]*0.0110266)+(x[1]*-0.060925346)+(x[2]*0.1889824));

                  else if(type==3) 
                    hasil_predik = 1.180278728+(x[0]*0.000935422)+(x[1]* -0.006456886)+(x[2]*0.012698668);
                  
                  
                  display.clearBuffer();
                  display.drawStr(0, y_, predik_1.c_str());
                  display.sendBuffer();
                  skip = 1;
                  delay(5000)  ;
                }
              }
            }
          }

          if (skip == 0) {

            val = (int)model_pred.predict(x);
            x[1] = x[0];
            x[0] = bekas;

                  if(type==0){  
                  float avg = x[1] - x[2];
                  if(avg < 250){
                      hasil_predik = (String)(int)(((float)x[0] * -0.012919107) + ((float)x[1] * 0.008141957) + ((float)x[2] * 0.015194451) + (val * 14.11696078) + 146.7363738);
                  }
                  else {
                    if(val == 0) 
                      hasil_predik = (String)(int)(((float)x[0] * -0.008896205) + ((float)x[1] * -0.00450833) + ((float)x[2] * -0.001395585) + (val * 14.11696078) + 126.886468);
                    else
                      hasil_predik = (String)(int)(((float)x[0] * -0.012919107) + ((float)x[1] * 0.008141957) + ((float)x[2] * 0.015194451) + (val * 14.11696078) + 146.7363738);
                  }
                  }
                  else if(type==2)   
                    hasil_predik = (int)(113.0734919+(x[0] * 0.0110266)+(x[1]*-0.060925346)+(x[2]*0.1889824));

                  else if(type==3) 
                    hasil_predik = 1.180278728+(x[0]*0.000935422)+(x[1]*-0.006456886)+(x[2]*0.012698668);
                    
              display.clearBuffer();
              display.drawStr(0, y_, "Nilai :");
              display.drawStr(0, y1_, (" " + hasil_predik + " mg/dL").c_str());
              display.sendBuffer();
              delay(5000)  ;
//            }
          }
#endif
  */

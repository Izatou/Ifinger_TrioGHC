#include "prediksiTekan.h"

Eloquent::ML::Port::RF prediksi;

int data_length = 603, sum=8;
int dataRaw[] = { 
  3173,3170,3166,3161,3157,3154,3180,3181,3181,3180,
  3181,3182,3185,3189,3192,3194,3167,3167,3167,3168,
  3167,3167,3164,3161,3160,3158,3157,3157,3157,3157,
  3157,3157,3159,3161,3163,3164,3165,3165,3164,3164,
  3164,3162,3160,3156,3154,3154,3154,3155,3155,3156,
  3156,3158,3161,3162,3163,3163,3162,3162,3162,3161,
  3160,3159,3157,3157,3156,3155,3155,3155,3155,3155,
  3154,3155,3155,3155,3155,3153,3151,3150,3149,3147,
  3145,3142,3138,3135,3129,3129,3130,3130,3130,3132,
  3134,3137,3141,3145,3152,3154,3155,3156,3156,3156,
  3156,3155,3154,3150,3149,3149,3149,3147,3145,3142,
  3140,3138,3139,3142,3143,3143,3143,3143,3144,3146,
  3147,3147,3146,3141,3139,3138,3137,3137,3138,3139,
  3141,3142,3145,3150,3152,3154,3155,3155,3154,3152,
  3150,3148,3146,3143,3141,3139,3138,3138,3139,3141,
  3143,3145,3147,3150,3152,3154,3156,3156,3155,3155,
  3152,3151,3150,3148,3144,3141,3139,3136,3136,3135,
  3135,3135,3134,3136,3139,3142,3144,3145,3145,3145,
  3145,3145,3145,3143,3140,3137,3136,3136,3137,3137,
  3138,3139,3141,3143,3147,3148,3148,3149,3149,3156,
  3154,

  779,775,772,770,771,770,772,775,777,783,
  788,794,797,798,799,798,797,795,792,786,
  780,774,770,768,767,768,769,771,774,780,
  787,793,798,801,802,802,802,800,799,795,
  789,784,780,777,775,775,775,777,778,781,
  787,793,797,801,804,805,805,805,804,802,
  796,791,787,785,784,785,786,788,791,795,
  801,808,813,817,818,819,818,817,815,813,
  808,802,798,794,792,791,791,792,793,796,
  801,807,813,816,820,822,823,822,822,820,
  816,810,805,803,802,801,802,804,806,809,
  814,821,827,831,834,836,836,834,833,830,
  826,820,814,810,807,807,808,808,810,813,
  817,824,830,834,837,838,837,837,836,834,
  831,826,821,818,815,815,816,818,820,822,
  825,831,837,842,845,847,847,847,845,844,
  841,836,830,825,822,821,820,820,822,825,
  827,833,839,845,849,851,853,853,852,850,
  848,844,838,833,829,827,827,827,829,831,
  835,841,847,852,855,857,857,856,855,852,
  845,
  
  481,481,483,484,490,496,500,502,503,502,
  501,499,496,493,488,484,483,483,487,490,
  492,493,495,495,494,495,495,495,495,495,
  496,496,496,496,496,495,495,496,495,496,
  496,497,497,497,497,497,497,496,496,496,
  496,496,496,497,497,497,498,498,498,499,
  499,499,499,499,499,499,499,499,499,499,
  499,499,500,499,499,499,499,499,499,499,
  499,499,500,500,500,500,501,501,501,501,
  501,501,501,501,501,501,502,501,501,502,
  502,502,502,502,502,502,501,501,501,501,
  502,502,502,502,502,502,502,502,502,503,
  503,503,503,504,504,504,504,505,506,505,
  505,505,505,504,504,503,503,503,502,503,
  503,503,504,504,504,505,505,505,505,505,
  505,505,505,506,506,507,507,507,507,507,
  508,507,507,508,507,507,507,507,508,507,
  507,507,508,508,508,508,508,508,508,509,
  509,509,508,508,508,508,508,508,508,508,
  508,507,508,509,509,509,509,509,509,509,
  509
   }; 
  

double Sys_x_n[] = { 1.53335670281317,
 0.00854095854730242,
 -2.77413175987639,
 0.456545998959419,
 -0.431760769069762,
 0.590722335245936,
 -0.905222144631049,
 0.246135292633117};

double Dia_x_n[] = { 1.53335670281317,
 0.00854095854730242,
 -2.77413175987639,
 0.456545998959419,
 -0.431760769069762,
 0.590722335245936,
 -0.905222144631049,
 0.246135292633117};

double Hr_x_n[] = { 1.53335670281317,
 0.00854095854730242,
 -2.77413175987639,
 0.456545998959419,
 -0.431760769069762,
 0.590722335245936,
 -0.905222144631049,
 0.246135292633117};

double intercept[]={
  166.092307874633, 108.811798775989, 131.346656568118
};

float means[3]={0};

  const int ARRAY_SIZE = 201;
  int listArr[ARRAY_SIZE] = {0};
  int fiturs[21]={0};
  int flag_=0;
  
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
    bubbleSort(arr,200);
    int persentilIndex = m * (float)n/100;
    int persentil = arr[persentilIndex];
    return persentil;
}


/*
  while(1){
  if(flag_==0){
        fiturs[0] = mcross(listArr);
        fiturs[3] = persentil(listArr,5,10);
        fiturs[1] = persentil(listArr,25,50);    
      }
      else if(flag_==1){
        fiturs[2] = mcross(listArr);
        fiturs[3] = persentil(listArr,5,10);
        fiturs[4] = persentil(listArr,95,190);
      }
      else if(flag_==2){
        fiturs[5] = persentil(listArr,5,10);
        fiturs[6] = persentil(listArr,75,10);
        fiturs[7] = persentil(listArr,50,10);
      }
      else 
        break;
      
  for(int i=0;i<ARRAY_SIZE;i++){
    listArr[i] = dataRaw[i+(flag_*ARRAY_SIZE)];
  }

      flag_ = flag_ + 1;
  }

*/

void setup() {
  Serial.begin(9600);
  Serial.print("Mean RGB: ");
  
  for(int x=0;x<3;x++){
      for(int i=0;i<ARRAY_SIZE;i++){
        listArr[i] = dataRaw[i+(x*ARRAY_SIZE)];
        means[x]= means[x] + listArr[i];
      }      
        means[x] = means[x]/ARRAY_SIZE;
        Serial.print(means[x]);
        Serial.print(" ");
        fiturs[0+x*7] = zcross(listArr);
        fiturs[1+x*7] = mcross(listArr);
        fiturs[2+x*7] = persentil(listArr,5,10);
        fiturs[3+x*7] = persentil(listArr,25,50);    
        fiturs[4+x*7] = persentil(listArr,75,150);    
        fiturs[5+x*7] = persentil(listArr,95,190);    
        fiturs[6+x*7] = persentil(listArr,50,100);    

  }

  Serial.print("\nFitur: ");
  int result=0;

  for(int i=0;i<21;i++){
      Serial.print(fiturs[i]);
      Serial.print(",");
      // result = result + fiturs[i]*x_n[i];
      }
  int pred = 0;
  pred = prediksi.predict(means);
  Serial.print("\nPrediksi Tekan: ");
    if(pred==1) Serial.print("Ditekan");
    else Serial.print("Tidak ditekan");

  // Serial.println(result+intercept[0]);
      
  
      // n = 0;
}

void loop() {
}
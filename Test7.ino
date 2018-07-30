#include <SPI.h>

int a=0;

#define RCK 9
#define SCK 13
#define MR 8
#define MOSI 11

void setup(){
  pinMode(RCK, OUTPUT);
  pinMode(SCK, OUTPUT);
  pinMode(MR, OUTPUT);
  pinMode(MOSI, OUTPUT);
  
  pinMode(14, OUTPUT);
  
  SPI.begin();
  SPI.setBitOrder(MSBFIRST);
  SPI.setClockDivider(SPI_CLOCK_DIV64);
  SPI.setDataMode(SPI_MODE0);

  digitalWrite(MR, HIGH);
}

void loop(){
  digitalWrite(MR, HIGH);
  
/*  unsigned int waka[16];
  memset(waka, 0, sizeof(waka));
  waka[0]  = 0x0810;
  waka[1]  = 0x0810;
  waka[2]  = 0xffff;
  waka[3]  = 0x0810;
  waka[4]  = 0x0810;
  waka[5]  = 0x0200;
  waka[6]  = 0x0200;
  waka[7]  = 0xffff;
  waka[8]  = 0x0400;
  waka[9]  = 0x0800;
  waka[10] = 0x1ffc;
  waka[11] = 0x2804;
  waka[12] = 0xc804;
  waka[13] = 0x0804;
  waka[14] = 0x0804;
  waka[15] = 0x0ffc;
*/
  unsigned int M[16];
  memset(M, 0, sizeof(M));
  M[0]  = 0x0000;
  M[1]  = 0xf01e;
  M[2]  = 0x3018;
  M[3]  = 0x3838;
  M[4]  = 0x2828;
  M[5]  = 0x2828;
  M[6]  = 0x2c68;
  M[7]  = 0x2448;
  M[8]  = 0x2448;
  M[9]  = 0x26c8;
  M[10] = 0x2288;
  M[11] = 0x2388;
  M[12] = 0x2108;
  M[13] = 0xf11e;
  M[14] = 0x0000;
  M[15] = 0x0000;


  unsigned int a[16];
  memset(a, 0, sizeof(a));
  a[0]  = 0x0000;
  a[1]  = 0x0000;
  a[2]  = 0x0000;
  a[3]  = 0x0000;
  a[4]  = 0x0000;
  a[5]  = 0x0000;
  a[6]  = 0x07c0;
  a[7]  = 0x0020;
  a[8]  = 0x0020;
  a[9]  = 0x07e0;
  a[10] = 0x0820;
  a[11] = 0x0820;
  a[12] = 0x0868;
  a[13] = 0x0798;
  a[14] = 0x0000;
  a[15] = 0x0000;




  unsigned int k[16];
  memset(k, 0, sizeof(k));
  k[0]  = 0x0000;
  k[1]  = 0x3800;
  k[2]  = 0x0800;
  k[3]  = 0x0800;
  k[4]  = 0x0800;
  k[5]  = 0x0800;
  k[6]  = 0x08f8;
  k[7]  = 0x0860;
  k[8]  = 0x0980;
  k[9]  = 0x0e00;
  k[10] = 0x0900;
  k[11] = 0x08c0;
  k[12] = 0x0830;
  k[13] = 0x3e7c;
  k[14] = 0x0000;
  k[15] = 0x0000;



  unsigned int e[16];
  memset(e, 0, sizeof(e));
  e[0]  = 0x0000;
  e[1]  = 0x0000;
  e[2]  = 0x0000;
  e[3]  = 0x0000;
  e[4]  = 0x0000;
  e[5]  = 0x0000;
  e[6]  = 0x03c0;
  e[7]  = 0x0420;
  e[8]  = 0x0810;
  e[9]  = 0x0ff0;
  e[10] = 0x0800;
  e[11] = 0x0800;
  e[12] = 0x0410;
  e[13] = 0x03e0;
  e[14] = 0x0000;
  e[15] = 0x0000;

  unsigned int colon[16];
  memset(colon, 0, sizeof(colon));
  colon[0]  = 0x0000;
  colon[1]  = 0x0000;
  colon[2]  = 0x0000;
  colon[3]  = 0x0000;
  colon[4]  = 0x0000;
  colon[5]  = 0x0000;
  colon[6]  = 0x0180;
  colon[7]  = 0x0180;
  colon[8]  = 0x0000;
  colon[9]  = 0x0000;
  colon[10] = 0x0000;
  colon[11] = 0x0000;
  colon[12] = 0x0180;
  colon[13] = 0x0180;
  colon[14] = 0x0000;
  colon[15] = 0x0000;


  unsigned int sinn[16];
  memset(sinn, 0, sizeof(sinn));
  sinn[0]  = 0x0088;
  sinn[1]  = 0x6198;
  sinn[2]  = 0x3110;
  sinn[3]  = 0x13fe;
  sinn[4]  = 0x0620;
  sinn[5]  = 0x0a20;
  sinn[6]  = 0x03fc;
  sinn[7]  = 0xf220;
  sinn[8]  = 0x1220;
  sinn[9]  = 0x13fc;
  sinn[10] = 0x1220;
  sinn[11] = 0x1220;
  sinn[12] = 0x13fe;
  sinn[13] = 0x3000;
  sinn[14] = 0x6800;
  sinn[15] = 0xc7ff;

    unsigned int choku[16];
  memset(choku, 0, sizeof(choku));
  choku[0]  = 0x2020;
  choku[1]  = 0x2120;
  choku[2]  = 0x213e;
  choku[3]  = 0x2120;
  choku[4]  = 0xf920;
  choku[5]  = 0x27ff;
  choku[6]  = 0x2020;
  choku[7]  = 0x2124;
  choku[8]  = 0x3b26;
  choku[9]  = 0xe623;
  choku[10] = 0x2024;
  choku[11] = 0x20ec;
  choku[12] = 0x2018;
  choku[13] = 0x2030;
  choku[14] = 0x20e0;
  choku[15] = 0x6380;


  
    unsigned int doo[16];
  memset(doo, 0, sizeof(doo));
  doo[0]  = 0x0005;
  doo[1]  = 0x1005;
  doo[2]  = 0x1800;
  doo[3]  = 0x0800;
  doo[4]  = 0x0c0c;
  doo[5]  = 0x0438;
  doo[6]  = 0x06e0;
  doo[7]  = 0x0380;
  doo[8]  = 0x0600;
  doo[9]  = 0x0c00;
  doo[10] = 0x1800;
  doo[11] = 0x1000;
  doo[12] = 0x1000;
  doo[13] = 0x1800;
  doo[14] = 0x0ffc;
  doo[15] = 0x0000;
  
    unsigned int uu[16];
  memset(uu, 0, sizeof(uu));
  uu[0]  = 0x0600;
  uu[1]  = 0x0380;
  uu[2]  = 0x00e0;
  uu[3]  = 0x0000;
  uu[4]  = 0x0000;
  uu[5]  = 0x1ff0;
  uu[6]  = 0x0018;
  uu[7]  = 0x0008;
  uu[8]  = 0x0008;
  uu[9]  = 0x0008;
  uu[10] = 0x0018;
  uu[11] = 0x0030;
  uu[12] = 0x0060;
  uu[13] = 0x01c0;
  uu[14] = 0x0f00;
  uu[15] = 0x0000;
  
    unsigned int de[16];
  memset(de, 0, sizeof(de));
  de[0]  = 0x0000;
  de[1]  = 0x0000;
  de[2]  = 0x7ffc;
  de[3]  = 0x0060;
  de[4]  = 0x00c5;
  de[5]  = 0x0185;
  de[6]  = 0x0100;
  de[7]  = 0x0300;
  de[8]  = 0x0200;
  de[9]  = 0x0200;
  de[10] = 0x0200;
  de[11] = 0x0300;
  de[12] = 0x0180;
  de[13] = 0x00e0;
  de[14] = 0x0038;
  de[15] = 0x0000;
  
    unsigned int suu[16];
  memset(suu, 0, sizeof(suu));
  suu[0]  = 0x0080;
  suu[1]  = 0x0080;
  suu[2]  = 0x0080;
  suu[3]  = 0xffff;
  suu[4]  = 0x0080;
  suu[5]  = 0x0080;
  suu[6]  = 0x0780;
  suu[7]  = 0x0cc0;
  suu[8]  = 0x0840;
  suu[9]  = 0x0840;
  suu[10] = 0x0c40;
  suu[11] = 0x07c0;
  suu[12] = 0x0080;
  suu[13] = 0x0180;
  suu[14] = 0x0300;
  suu[15] = 0x0e00;
  
    unsigned int ka[16];
  memset(ka, 0, sizeof(ka));
  ka[0]  = 0x0400;
  ka[1]  = 0x0400;
  ka[2]  = 0x0408;
  ka[3]  = 0x040c;
  ka[4]  = 0x7f86;
  ka[5]  = 0x0442;
  ka[6]  = 0x0443;
  ka[7]  = 0x0c41;
  ka[8]  = 0x0841;
  ka[9]  = 0x0840;
  ka[10] = 0x1840;
  ka[11] = 0x1040;
  ka[12] = 0x30c0;
  ka[13] = 0x6080;
  ka[14] = 0x0380;
  ka[15] = 0x0000;

    unsigned int question[16];
  memset(question, 0, sizeof(question));
  question[0]  = 0x0000;
  question[1]  = 0x07e0;
  question[2]  = 0x0810;
  question[3]  = 0x1008;
  question[4]  = 0x1008;
  question[5]  = 0x0808;
  question[6]  = 0x0030;
  question[7]  = 0x00c0;
  question[8]  = 0x0100;
  question[9]  = 0x0100;
  question[10] = 0x0000;
  question[11] = 0x0000;
  question[12] = 0x0180;
  question[13] = 0x0180;
  question[14] = 0x0000;
  question[15] = 0x0000;


  unsigned int space[16];
  memset(space, 0, sizeof(space));


  unsigned int tmp1[16];
  memset(tmp1, 0xFF, sizeof(tmp1));
  unsigned int tmp2[16];
  memset(tmp2, 0xFF, sizeof(tmp2));
    
  //出力文字リスト
  unsigned int* string1[6] ={space,M,a,k,e,space};
  unsigned int* string2[10] = {space, sinn, choku, doo, uu, de, suu, ka, question, space};
  
  //出力文字リストリスト
  unsigned int** stlist[3] = {string1, string2};
  
  for(int i=0; i<5; i++){
    lotateView( string1[i], tmp1);
    revCont(tmp1);
    copyView(tmp1, string1[i]);
  }

//  revCont(space);
  
  for(int i=0; i<10; i++){
    lotateView( string2[i], tmp1);
    revCont(tmp1);
    copyView(tmp1, string2[i]);
  }

  unsigned int viewR[16];
  memset(viewR, 0xFF, sizeof(viewR));
  unsigned int viewG[16];
  memset(viewG, 0xFF, sizeof(viewG));
  
  long interval = 40;
  unsigned long currentMillis = millis();
  unsigned long previousMillis = currentMillis;
  
  int sifti = 0;
  int stri  = 0;
  int color = 0;
  
  int strin = 0;
// 色側は0で光る｡ COMMON側は1で光る

while(1){

  currentMillis = millis();
  if(currentMillis - previousMillis > interval){
    if(strin == 0) sift(sifti, tmp1, string2[stri], string2[stri+1]);  
    if(strin == 1) sift(sifti, tmp1, string1[stri], string1[stri+1]);  

    if(sifti ==15){
      sifti = 0;
      stri++;
      if(strin == 0 && stri == 9 && color == 1){
        stri =0;
        color = color ^ 0x01;
        strin = 1;
      }else if(strin == 0 && stri == 9 && color == 0){
        stri =0;
        color = color ^ 0x01;
        strin = 1;
      }else if(strin == 1 && stri == 5 && color == 0){
        stri=0;
//        color = color ^ 0x01;
        strin = 0;
      }else if(strin == 1 && stri == 5){
        stri=0;
//        color = color ^ 0x01;
        strin = 0;
      }
    }else sifti++;

    if(color == 0){
      copyView(tmp1, viewR);
      copyView(space, viewG);
    }else{
      copyView(space, viewR);
      copyView(tmp1, viewG);
    }
    
    previousMillis = currentMillis;

    fixGreen(viewG);
  }

//  revCont(tmp);

  for(int j=0; j<16; j++){
    digitalWrite(RCK, LOW);
    
    unsigned char redU = viewR[j] >>8;
    unsigned char redD = viewR[j];
    unsigned char greenU = viewG[j] >>8;
    unsigned char greenD = viewG[j];
    unsigned char selU = (1<<j) >>8;
    unsigned char selD = 1<<j;

    SPI.transfer(greenU );    //GU
    SPI.transfer(redD );   //RD
    SPI.transfer(redU );   //RU
    SPI.transfer(greenD );    //GD
    SPI.transfer(selD );   //selD
    SPI.transfer(selU );   //selU

    digitalWrite(RCK, HIGH);
//    delay(100);
  }
}
}

//緑の配線の間違いを治す
void fixGreen(unsigned int input[]){
  for(int i=0; i<16; i++){
    unsigned int tmp = input[i];
    for(int j=0; j<16; j++){
      if(j<8 || j==15){
        input[i] = (input[i]<<1) | (tmp>>(15-j) & 0x01);
      }else{
        input[i] = (input[i]<<1) | (tmp>>(j+1-8) & 0x01);
      }
    }
  }
}

//コピーする
void copyView(const unsigned int input[], unsigned int output[]){
  for(int i=0; i<16; i++){
    output[i] = input[i];
  }
}

//表示を正しい向きに回転させる(Red)
void lotateView(const unsigned int input[], unsigned int tmp[]){
  
  for(int x=0; x<16; x++){
    for(int y=0; y<16; y++){
      tmp[x] = (tmp[x]<<1) | ((input[y]>>(16-x ))  &0x01);
    }
  }
}

//色を反転させる
void revCont(unsigned int tmp[]){
  for(int i=0; i<16; i++){
    tmp[i] = tmp[i] ^ 0xFFFF;
  }
}

//右にずらす
void sift(int sift, unsigned int tmp[], const unsigned int a[], const unsigned int b[]){
  
  for(int i=0; i<16; i++){
    if(i+sift < 16) tmp[i] = a[i+sift];
    else tmp[i] = b[ i+sift -16];
  }
}

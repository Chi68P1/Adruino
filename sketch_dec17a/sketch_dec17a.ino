#include <REGX51.H>

// khai bao chan su dung de quet ma cua hang;
sbit shcp = P2^0;
sbit ds = P2^1;
sbit stcp = P2^2;

unsigned char cot[]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
unsigned char code ma[]={
            0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
            0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
            0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
            0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
          
            0xff,0x81,0xfe,0xfe,0xfe,0xfe,0x81,0xff,//u
            0x8f,0x77,0x7b,0xbd,0x7b,0x77,0x8f,0xff,// trai tim   
            0xff,0xbe,0xbe,0x80,0xbe,0xbe,0xff,0xff,//i
                      
            0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
            0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,    
            0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
            0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
            };

void delay(unsigned int time){
  unsigned int i,j;
  for(i=0;i<time;i++){
    for(j=0;j<123;j++);
  }
}

// dung de xuat 1 byte de dieu khien hang.
void dichma(unsigned char a){
  int i;
  for(i=0; i<8; i++){
    //b1: truyen du lieu vao chan ds;
    ds=a&(0x80>>i); // lay tung bit cua byte a gui qua chan ds,
            // lay bit cao nhat truoc.
    //b2: tao xung dich du lieu.
    shcp=0; shcp=1;
  } /*
    ket thuc vong for thì ta da dich duoc 8 bit cua byte a
    qua chan ds
  */
  //b3: tao xung xuat du lieu.
  stcp=0; stcp=1;
}

/*
  quet led ma tran co 8x32
  su dung phuong phap quet led theo cot;
  8 hang 32 cot
*/

int main(){
  int i,j,k;
  while(1){
    for(i=56; i>=0; i--){
    /*
      11*8=88 ma;
      n-X*8:
        n: tong so ma cua mang ki tu;
        X: so ngoai vi su dung;
        88 - 4*8=56
    */
      for(k=0; k<15; k++){    
        for(j=0; j<8; j++){
          dichma(ma[i+j+0]);  
          dichma(ma[i+j+8]);  
          dichma(ma[i+j+16]); 
          dichma(ma[i+j+24]);  
          P3=cot[j];
          delay(1);
          P3=0x00;

    /*
      i=0,j=0: 
          dichma(ma[i+j+0])  = dichma(ma[0]) =   0xff
          dichma(ma[i+j+8])  = dichma(ma[8]) =   0xff
          dichma(ma[i+j+16]) = dichma(ma[16]) =  0xff
          dichma(ma[i+j+24]) = dichma(ma[24]) =  0xff
        j=1:
          dichma(ma[i+j+0])  = dichma(ma[1]) =   0xff
          dichma(ma[i+j+8])  = dichma(ma[9]) =   0xff
          dichma(ma[i+j+16]) = dichma(ma[17]) =  0xff
          dichma(ma[i+j+24]) = dichma(ma[25]) =  0xff
      
        j=7:
          dichma(ma[i+j+0])  = dichma(ma[7]) =   0xff
          dichma(ma[i+j+8])  = dichma(ma[15]) =   0xff
          dichma(ma[i+j+16]) = dichma(ma[23]) =  0xff
          dichma(ma[i+j+24]) = dichma(ma[31]) =  0xff 
      i=1,j=0:
          dichma(ma[i+j+0])  = dichma(ma[1]) =   0xff
          dichma(ma[i+j+8])  = dichma(ma[9]) =   0xff
          dichma(ma[i+j+16]) = dichma(ma[17]) =  0xff
          dichma(ma[i+j+24]) = dichma(ma[25]) =  0xff
        j=1:
          dichma(ma[i+j+0])  = dichma(ma[2]) =   0xff
          dichma(ma[i+j+8])  = dichma(ma[10]) =   0xff
          dichma(ma[i+j+16]) = dichma(ma[18]) =  0xff
          dichma(ma[i+j+24]) = dichma(ma[26]) =  0xff
      
        j=7:
          dichma(ma[i+j+0])  = dichma(ma[8]) =   0xff
          dichma(ma[i+j+8])  = dichma(ma[16]) =   0xff
          dichma(ma[i+j+16]) = dichma(ma[24]) =  0xff
          dichma(ma[i+j+24]) = dichma(ma[32]) =  0xff
          
      i=2,j=0:
          dichma(ma[i+j+0])  = dichma(ma[2]) =   0xff
          dichma(ma[i+j+8])  = dichma(ma[10]) =   0xff
          dichma(ma[i+j+16]) = dichma(ma[18]) =  0xff
          dichma(ma[i+j+24]) = dichma(ma[26]) =  0xff
        j=1:
          dichma(ma[i+j+0])  = dichma(ma[3]) =   0xff
          dichma(ma[i+j+8])  = dichma(ma[11]) =   0xff
          dichma(ma[i+j+16]) = dichma(ma[19]) =  0xff
          dichma(ma[i+j+24]) = dichma(ma[27]) =  0xff
      
        j=7:
          dichma(ma[i+j+0])  = dichma(ma[9]) =   0xff
          dichma(ma[i+j+8])  = dichma(ma[17]) =   0xff
          dichma(ma[i+j+16]) = dichma(ma[25]) =  0xff
          dichma(ma[i+j+24]) = dichma(ma[33]) =  0x8f;            

    */

        }
      }
      
    }
  }
}

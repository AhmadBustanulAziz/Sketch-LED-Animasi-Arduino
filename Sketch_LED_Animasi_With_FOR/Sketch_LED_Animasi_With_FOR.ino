/*
Nama      : Ahmad Bustanul Aziz
Tanggal   : 30 September 2021
Deskripsi : Sketch LED Animasi with FOR
 */

//Inisialisasi pin yang mengontrol LED
const int pinLED1 = 8;
const int pinLED2 = 9;
const int pinLED3 = 10;
const int pinLED4 = 11;

void setup() {
  //pin LED sebagai output
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
  pinMode(pinLED4, OUTPUT);
}

void loop() {
  //Perulangan sebanyak 5 kali
  for(int i=0; i<5; i++) {
    if(i==1) {
      //jika i=1, LED 1 hidup, LED lainnya mati
      delay(1000);
      digitalWrite(pinLED1, HIGH);
      digitalWrite(pinLED2, LOW);
      digitalWrite(pinLED3, LOW);
      digitalWrite(pinLED4, LOW);
    } else if (i==2) {
      //jika i=2, LED 1 dan 2 hidup, LED lainnya mati
      delay(1000);
      digitalWrite(pinLED1, HIGH);
      digitalWrite(pinLED2, HIGH);
      digitalWrite(pinLED3, LOW);
      digitalWrite(pinLED4, LOW);
    } else if (i == 3) {
      //jika i=3, LED 1, 2 dan 3 hidup, LED lainnya mati
      delay(1000);
      digitalWrite(pinLED1, HIGH);
      digitalWrite(pinLED2, HIGH);
      digitalWrite(pinLED3, HIGH);
      digitalWrite(pinLED4, LOW);
    } else if (i==4) {
      //jika i=4, Semua LED hidup
      delay(1000);
      digitalWrite(pinLED1, HIGH);
      digitalWrite(pinLED2, HIGH);
      digitalWrite(pinLED3, HIGH);
      digitalWrite(pinLED4, HIGH);
    } else {
      //semua LED mati
      delay(1000);
      digitalWrite(pinLED1, LOW);
      digitalWrite(pinLED2, LOW);
      digitalWrite(pinLED3, LOW);
      digitalWrite(pinLED4, LOW); 
    }
  }
  //delay selama 1 detik
  delay(1000);
}

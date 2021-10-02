
/*
Nama      : Ahmad Bustanul Aziz
Tanggal   : 2 Oktober 2021
Deskripsi : Sketch LED Animasi with ARRAY Versi 2
 */
 
//Inisialisasi jumlah LED
const int numLED = 4;
//Inisialisasi array LED
const int pinLED[numLED]={8,9,10,11};
  
void setup() {
  //Inisialisasi semua pin LED sebagai OUTPUT
  for(int i=0;i<4;i++){
    pinMode(pinLED[i], OUTPUT);
  }
}

void loop() {
  //Hidupkan LED secara bertahap dari index 0-2 
  //Dan terdapat delay 200ms sebalum mati
  for(int i=0;i<3;i++) {
    digitalWrite(pinLED[i], HIGH);
    delay(200);
    digitalWrite(pinLED[i], LOW);
  }
  
  //Hidupkan LED secara bertahap dari index 2-0 
  //Dan terdapat delay 200ms sebalum mati
  for(int i=3;i>0;i--) {
    digitalWrite(pinLED[i], HIGH);
    delay(200);
    digitalWrite(pinLED[i], LOW);
  }
}

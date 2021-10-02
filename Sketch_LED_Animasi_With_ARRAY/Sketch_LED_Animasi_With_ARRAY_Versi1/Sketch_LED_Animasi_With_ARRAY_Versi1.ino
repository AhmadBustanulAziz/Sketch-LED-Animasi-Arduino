
/*
Nama      : Ahmad Bustanul Aziz
Tanggal   : 2 Oktober 2021
Deskripsi : Sketch LED Animasi with ARRAY Versi 1
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
  //Hidupkan LED secara bertahap dengan delay masing-masing 500ms
  for(int i=0;i<4;i++) {
    digitalWrite(pinLED[i], HIGH);
    delay(500);
  }
  
  //Matikan LED secara bertahap dengan delay masing-masing 500ms
  for(int i=0;i<4;i++) {
    digitalWrite(pinLED[i], LOW);
    delay(500);
  }
}

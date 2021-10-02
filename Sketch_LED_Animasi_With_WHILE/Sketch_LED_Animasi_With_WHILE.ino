/*
Nama      : Ahmad Bustanul Aziz
Tanggal   : 30 September 2021
Deskripsi : Sketch LED Animasi with WHILE
 */

//Inisialisasi pin yang mengontrol LED (Disini pakai pin 7)
const int pinLED = 7;

void setup() {
  //pin LED sebagai output
  pinMode(pinLED, OUTPUT);
}

//Inisialisasi timeDelay 
int timeDelay = 3000;

void loop() {
  //Selama nilai timeDelay > 0, eksekusi blok program ini
  while(timeDelay > 0) {
    //LED hidup mati dengan durasi 500ms
    digitalWrite(pinLED, HIGH);
    delay(500);
    digitalWrite(pinLED, LOW);
    delay(500);

    //kurangi timeDelay dengan 100
    timeDelay = timeDelay - 100;
  }

  //Selama nilai timeDelay < 1000, eksekusi blok program ini
  while(timeDelay < 1000) {
    //LED hidup mati dengan durasi 100ms
    digitalWrite(pinLED, HIGH);
    delay(100);
    digitalWrite(pinLED, LOW);
    delay(100);

    //Tambahkan timeDelay dengan 100
    timeDelay = timeDelay + 100;
  }
}

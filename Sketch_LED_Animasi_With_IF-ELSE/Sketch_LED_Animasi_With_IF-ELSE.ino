/*
Nama      : Ahmad Bustanul Aziz
Tanggal   : 30 September 2021
Deskripsi : Sketch LED Animasi with IF-ELSE
 */

//Inisialisasi pin yang mengontrol LED (Disini pakai pin 7)
const int pinLED = 7;

void setup() {
  //pin 7 diset sebagai Output
  pinMode(pinLED, OUTPUT);
}

//inisialisasi waktu delay
int timeDelay = 1000;

void loop() {
  /*Jika waktu delay kurang dari sama dengan 100
    maka LED akan diam selama 3 detik
    lalu nilai timeDelay direset menjadi 1000
   */
  if(timeDelay <= 100) {
    delay(3000);
    timeDelay = 1000;
  } else {
    //Nilai timeDelay dikurangi 100 jika timeDelay > 100
    timeDelay = timeDelay - 100;
  }
  
  //LED menyala dan mati selama timeDelay
  digitalWrite(pinLED, HIGH);
  delay(timeDelay);
  digitalWrite(pinLED, LOW);
  delay(timeDelay);
}

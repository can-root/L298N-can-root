#include <L298N-can-root.h>

L298N_can_root motorSurucu(3, 4, 5, 6, 9, 10);

void setup() {
    motorSurucu.baslat();
}

void loop() {
    motorSurucu.motor1Yonu(1);   // Motor 1 ileri
    motorSurucu.motor2Yonu(-1);  // Motor 2 geri
    motorSurucu.motor1Hiz(255);  // Motor 1 maksimum hız
    motorSurucu.motor2Hiz(128);  // Motor 2 yarım hız
    delay(2000);

    motorSurucu.motor1Yonu(-1);  // Motor 1 geri
    motorSurucu.motor2Yonu(1);   // Motor 2 ileri
    motorSurucu.motor1Hiz(128);  // Motor 1 yarım hız
    motorSurucu.motor2Hiz(255);  // Motor 2 maksimum hız
    delay(2000);

    motorSurucu.sagaDurdur();    // Sadece sağ motoru durdur
    delay(1000);

    motorSurucu.solaDurdur();    // Sadece sol motoru durdur
    delay(1000);

    motorSurucu.durdur();        // Her iki motoru durdur
    delay(1000);
}

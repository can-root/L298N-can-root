#include "L298N-can-root.h"
#include "Arduino.h"

L298N_can_root::L298N_can_root(int in1, int in2, int in3, int in4, int ena, int enb) {
    _in1 = in1;
    _in2 = in2;
    _in3 = in3;
    _in4 = in4;
    _ena = ena;
    _enb = enb;
    _motor1Yonu = 1;  // 1: İleri, -1: Geri
    _motor2Yonu = 1;  // 1: İleri, -1: Geri
    _motor1Hiz = 255; // Başlangıç hızı
    _motor2Hiz = 255; // Başlangıç hızı
}

void L298N_can_root::baslat() {
    pinMode(_in1, OUTPUT);
    pinMode(_in2, OUTPUT);
    pinMode(_in3, OUTPUT);
    pinMode(_in4, OUTPUT);
    pinMode(_ena, OUTPUT);
    pinMode(_enb, OUTPUT);

    analogWrite(_ena, _motor1Hiz);
    analogWrite(_enb, _motor2Hiz);
}

void L298N_can_root::motor1Yonu(int yon) {
    _motor1Yonu = yon;
    if (_motor1Yonu == 1) {
        digitalWrite(_in1, HIGH);
        digitalWrite(_in2, LOW);
    } else if (_motor1Yonu == -1) {
        digitalWrite(_in1, LOW);
        digitalWrite(_in2, HIGH);

    }
    else if (_motor1Yonu == 0) {
        digitalWrite(_in1, LOW);
        digitalWrite(_in2, LOW);
}

void L298N_can_root::motor2Yonu(int yon) {
    _motor2Yonu = yon;
    if (_motor2Yonu == 1) {
        digitalWrite(_in3, HIGH);
        digitalWrite(_in4, LOW);
    } else if (_motor2Yonu == -1) {
        digitalWrite(_in3, LOW);
        digitalWrite(_in4, HIGH);
    }
    else if (_motor1Yonu == 0) {
        digitalWrite(_in1, LOW);
        digitalWrite(_in2, LOW);
}

void L298N_can_root::motor1Hiz(int hiz) {
    _motor1Hiz = hiz;
    analogWrite(_ena, _motor1Hiz);
}

void L298N_can_root::motor2Hiz(int hiz) {
    _motor2Hiz = hiz;
    analogWrite(_enb, _motor2Hiz);
}

void L298N_can_root::ileriGit(int hiz) {
    motor1Yonu(1);
    motor2Yonu(1);
    motor1Hiz(hiz);
    motor2Hiz(hiz);
}

void L298N_can_root::geriGit(int hiz) {
    motor1Yonu(-1);
    motor2Yonu(-1);
    motor1Hiz(hiz);
    motor2Hiz(hiz);
}

void L298N_can_root::solaDon(int hiz) {
    motor1Yonu(-1);
    motor2Yonu(1);
    motor1Hiz(hiz);
    motor2Hiz(hiz);
}

void L298N_can_root::sagaDon(int hiz) {
    motor1Yonu(1);
    motor2Yonu(-1);
    motor1Hiz(hiz);
    motor2Hiz(hiz);
}

void L298N_can_root::durdur() {
    motor1Yonu(0);
    motor2Yonu(0);
    motor1Hiz(0);
    motor2Hiz(0);
}

void L298N_can_root::sagaDurdur() {
    motor2Yonu(0);   // Sağ motoru durdur
    motor2Hiz(0);    // Sağ motor hızını sıfırla
}

void L298N_can_root::solaDurdur() {
    motor1Yonu(0);   // Sol motoru durdur
    motor1Hiz(0);    // Sol motor hızını sıfırla
}

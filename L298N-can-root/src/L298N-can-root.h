#ifndef L298N_can_root_h
#define L298N_can_root_h

#include "Arduino.h"

class L298N_can_root {
public:
    L298N_can_root(int in1, int in2, int in3, int in4, int ena, int enb);
    void baslat();
    void motor1Yonu(int yon);
    void motor2Yonu(int yon);
    void motor1Hiz(int hiz);
    void motor2Hiz(int hiz);
    void ileriGit(int hiz);
    void geriGit(int hiz);
    void solaDon(int hiz);
    void sagaDon(int hiz);
    void durdur();
    void sagaDurdur();   // Sağ motoru durdur
    void solaDurdur();   // Sol motoru durdur

private:
    int _in1, _in2, _in3, _in4, _ena, _enb;
    int _motor1Yonu, _motor2Yonu;
    int _motor1Hiz, _motor2Hiz;
};

#endif

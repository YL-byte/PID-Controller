#include "PID.h"
#include "Ball.h"
#include "Swing.h"
#include <iostream>
#include <cmath>
#define ITERATIONS 100000
using namespace std;
int main() {
    float dt = 0.001;
    PID myPID(0, 1, 0, 3, dt);
    Swing mySwing(0, 200);
    Ball myBall(25, 0, dt);
    cout << "Index\tLocation\tAngle" << std::endl;
    for (int i = 0; i < ITERATIONS; i++) {
        float angle = mySwing.getAngle();
        float location = myBall.step(angle, mySwing.getLength());
        float angleAddition = myPID.step(location);
        cout << i << "\t" << location << "\t" << angle << std::endl;
        angle += angleAddition;
        mySwing.setAngle(angle);
    }
    myPID.setBalancePoint(25);
    for (int i = 0; i < ITERATIONS; i++) {
        float angle = mySwing.getAngle();
        float location = myBall.step(angle, mySwing.getLength());
        float angleAddition = myPID.step(location);
        cout << i + ITERATIONS << "\t" << location << "\t" << angle << std::endl;
        angle += angleAddition;
        mySwing.setAngle(angle);
    }
    return 0;
} 
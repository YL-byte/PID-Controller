#ifndef BALL_H
#define BALL_H
#define G 9.81
#define PI 3.14159265

#include <cmath>
class Ball{
    private:
    float location;
    float velocity;
    float dt;
    public:
    Ball(float location=0, float velocity=0, float dt=1): location(location), velocity(velocity), dt(dt) {}
    float step(float angle, float length);
    float getLocation();
    float getVelocity();
};

#endif
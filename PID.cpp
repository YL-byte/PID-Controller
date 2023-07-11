#include "PID.h"
PID::PID(float balancePoint, float kp, float ki, float kd, float dt): balancePoint(balancePoint), kp(kp), ki(ki), kd(kd), dt(dt), previousValue(0), totalError(0), isFirstStep(true) {}

float PID::step(float value){
    float result = 0;
    float error = (value - balancePoint);
    this->totalError += this->dt * error;
    result += this->kp * error;
    result += this->ki * this->totalError;
    if (this->isFirstStep) {
        this->isFirstStep = false;    
    }
    else {
        result += this->kd * (value - this->previousValue) / this->dt;
    }
    this->previousValue = value;
    return result;
}

float PID::getBalancePoint() {
    return this->balancePoint;
}

void PID::setBalancePoint(float newBalancePoint) {
    this->balancePoint = newBalancePoint;
}
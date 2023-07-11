#ifndef PID_H
#define PID_H

class PID {
    private:
    float balancePoint;
    float kp;
    float ki;
    float kd;
    float dt;
    float previousValue;
    float totalError;
    bool isFirstStep;
    public:
    PID(float balancePoint=0, float kp=1, float ki=1, float kd=1, float dt=1);
    ~PID()=default;
    PID(const PID&) = default;
    float step(float value);
    void setBalancePoint(float newBalancePoint);
    float getBalancePoint();
};

#endif
#ifndef SWING_H
#define SWING_H
#define MARGINE 45
class Swing{
    private:
    float angle;
    float length;
    public:
    Swing(float angle=0, float length=1): angle(angle), length(length) {}
    void setAngle(float angle);
    float getAngle();
    float getLength();
};

#endif
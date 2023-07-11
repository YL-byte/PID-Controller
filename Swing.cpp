#include "Swing.h"

void Swing::setAngle(float angle){
    if(angle >= MARGINE){
        this->angle = MARGINE;
    }
    else if (angle <= -MARGINE) {
        this->angle = -MARGINE;
    }
    else {
        this->angle = angle;
    }
}

float Swing::getAngle() {
    return this->angle;
}

float Swing::getLength() {
    return this->length;
}
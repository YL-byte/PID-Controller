#include "Ball.h"

float Ball::step(float angle, float length) {
    angle *= PI;
    angle /= 180;
    float acceleration = -1 * std::sin(angle) * G;
    this->velocity += acceleration * this->dt;
    this->location += this->velocity * this->dt;
    if (this->location >= length / 2) {
        this->location = length / 2;
        this->velocity = 0;
    }
    if (this->location <= -1 * length / 2) {
        this->location = -1 * length / 2;
        this->velocity = 0;
    }
    return this->location;
}

float Ball::getLocation() {
    return this->location;
}

float Ball::getVelocity() {
    return this->velocity;
}
#include "Car.h"

Car::Car(): doors(0) {}

int Car::getDoors() const {
    return doors;
}

void Car::setDoors(int doors) {
    this->doors = doors;
}

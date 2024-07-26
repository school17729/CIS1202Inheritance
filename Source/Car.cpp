#include "Car.h"

Car::Car(const string& manufacturer, int year, int doors): Vehicle(manufacturer, year) , doors(doors) {}

int Car::getDoors() const {
    return doors;
}

void Car::setDoors(int doors) {
    this->doors = doors;
}

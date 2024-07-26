#pragma once

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int doors;
public:
    Car(const string&, int, int);

    int getDoors() const;

    void setDoors(int);

    void displayInfo() const;
};

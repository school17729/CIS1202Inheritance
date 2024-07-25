#include "Vehicle.h"

class Car : public Vehicle {
private:
    int doors;
public:
    Car();

    int getDoors() const;

    void setDoors(int);
};

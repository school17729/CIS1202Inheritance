#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int towingCapacity;
public:
    Truck();

    int getTowingCapacity() const;

    void setTowingCapacity(int);
};

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int towingCapacity;
public:
    Truck(const string&, int, int);

    int getTowingCapacity() const;

    void setTowingCapacity(int);
};

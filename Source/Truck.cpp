#include "Truck.h"

Truck::Truck(const string& manufacturer, int year, int towingCapacity): Vehicle(manufacturer, year), towingCapacity(towingCapacity) {}

int Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}

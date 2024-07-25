#include "Vehicle.h"

Vehicle::Vehicle(): manufacturer(""), year(0) {}

string Vehicle::getManufacturer() const {
    return manufacturer;
}

int Vehicle::getYear() const {
    return year;
}

void Vehicle::setManufacturer(const string& manufacturer) {
    this->manufacturer = manufacturer;
}

void Vehicle::setYear(int year) {
    this->year = year;
}

void Vehicle::displayInfo() const {
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year: " << year << endl;
}

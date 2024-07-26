// Christopher Kong
// CIS 1202 801
// July 25th 2024

#include "Car.h"
#include "Generic.h"
#include "Truck.h"

int main() {
    string manufacturer;
    int year;
    int doors;
    int towingCapacity;
    
    cout << "Vehicle Program" << endl << endl;

    cout << "Vehicle:" << endl;
    getProperty("Enter manufacturer of vehicle.", manufacturer);
    getProperty("Enter year built of vehicle.", year);
    Vehicle vehicle = Vehicle(manufacturer, year);
    vehicle.displayInfo();
    cout << endl;

    cout << "Car:" << endl;
    getProperty("Enter manufacturer of vehicle.", manufacturer);
    getProperty("Enter year built of vehicle.", year);
    getProperty("Enter number of doors of vehicle.", doors);
    Car car = Car(manufacturer, year, doors);
    car.displayInfo();
    cout << endl;

    cout << "Truck:" << endl;
    getProperty("Enter manufacturer of vehicle.", manufacturer);
    getProperty("Enter year built of vehicle.", year);
    getProperty("Enter towing capacity.", towingCapacity);
    Truck truck = Truck(manufacturer, year, towingCapacity);
    truck.displayInfo();
    cout << endl;

    return 0;
}

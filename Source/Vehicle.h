#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
    string manufacturer;
    int year;
public:
    Vehicle();

    string getManufacturer() const;

    int getYear() const;

    void setManufacturer(const string&);

    void setYear(int);

    void displayInfo() const;

};
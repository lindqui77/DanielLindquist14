// Daniel Lindquist
// CIS 1202 5TI
// August 1, 2021

#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;


void Vehicle::setManufacturer(string tempManufacturer) {
	manufacturer = tempManufacturer;
}

string Vehicle::getManufacturer() const {
	return manufacturer;
}

void Vehicle::setYear(int tempYear) {
	year = tempYear;
}

int Vehicle::getYear() const {
	return year;
}

void Vehicle::displayInfo() {
	cout << "Vehicle Information: " << endl;
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << year << endl;
}
// Daniel Lindquist
// CIS 1202 5TI
// August 1, 2021

#include "Car.h"
#include "Vehicle.h"
using namespace std;

void Car::setnumOfDoors(int numOfCarDoors) {
	numOfDoors = numOfCarDoors;
}
int Car::getnumOfDoors() const {
	return numOfDoors;
}
void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Doors: " << numOfDoors << endl;
}

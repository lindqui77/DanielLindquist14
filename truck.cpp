// Daniel Lindquist
// CIS 1202 5TI
// August 1, 2021

#include "Truck.h"
#include "Vehicle.h"
using namespace std;

void Truck::setTowCapacity(int tempTowCapacity) {
	towCapacity = tempTowCapacity;
}
int Truck::getTowCapacity() const {
	return towCapacity;
}
void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towCapacity;
}
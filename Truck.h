// Daniel Lindquist
// CIS 1202 5TI
// August 1, 2021

#pragma once
#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <string>

using namespace std;

class Truck : public Vehicle {
private:
	int towCapacity;

public:
	// Default Constructor
	Truck() : Vehicle() {
		towCapacity = 0;
	}
	// Constructor
	Truck(string truckManufacturer, int truckYear, int tempTowCapacity) : Vehicle(truckManufacturer, truckYear) {
		towCapacity = tempTowCapacity;
	}
	// Getters and Setters
	void setTowCapacity(int);
	int getTowCapacity() const;
	void displayInfo();
};
#endif
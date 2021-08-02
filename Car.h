// Daniel Lindquist
// CIS 1202 5TI
// August 1, 2021

#pragma once
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <string>

using namespace std;

class Car : public Vehicle {
	private:
		int numOfDoors;

	public:
		// Default Constructor
		Car() : Vehicle() {
			numOfDoors = 0;
		}
		// Constructor
		Car(string carManufacturer, int carYear, int numOfCarDoors) : Vehicle(carManufacturer, carYear) {
			numOfDoors = numOfCarDoors;
		}
		// Getters and Setters
		void setnumOfDoors(int numOfCarDoors);
		int getnumOfDoors() const;
		void displayInfo();
};
#endif
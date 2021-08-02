// Daniel Lindquist
// CIS 1202 5TI
// August 1, 2021

#ifndef RECTANGLE_H
#define RECTANGLE_H

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
	private:
		string manufacturer;
		int year;
	
	public:
		// Default constructor
		Vehicle() {
			manufacturer = "";
			year = 0;
		}
		// Constructor
		Vehicle(string tempManufacturer, int tempYear) {
			manufacturer = tempManufacturer;
			year = tempYear;
		}
		// function declarations
		void setManufacturer(string);
		string getManufacturer() const;
		void setYear(int tempYear);
		int getYear() const;
		void displayInfo();
};
#endif
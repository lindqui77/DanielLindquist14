// Daniel Lindquist
// CIS 1202 5TI
// August 1, 2021

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
    // Display Title
    cout << "Vehicle Program\n\n";
    // Variables for vehicle
    string manufacturer;
    int year;
    // Obtain user input for Vehicle object
    cout << "Vehicle:\n";
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> year;
    cin.ignore();
    // Vehicle object
    Vehicle vehicle1(manufacturer, year);
    // Display vehicle info
    vehicle1.displayInfo();

    // Variable for car
    int carDoor = 0;
    // Obtain user input for Car object
    cout << "\nCar:\n";
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> year;
    cout << "Enter the number of doors: ";
    cin >> carDoor;
    cin.ignore();
    // Car object
    Car car1(manufacturer, year, carDoor);
    // Display Car info
    car1.displayInfo();

    // Variable for Truck
    int towCapacity = 0;
    // Obtain user input for Truck object
    cout << "\nTruck:\n";
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> year;
    cout << "Enter towing capacity: ";
    cin >> towCapacity;
    // Truck object
    Truck truck1(manufacturer, year, towCapacity);
    // Display Car info
    truck1.displayInfo();
    return 0;
}


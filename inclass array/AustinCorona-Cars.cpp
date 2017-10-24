// Program Cars reads a record from a file and writes
// its contents to the screen with the price member
// increased by 10%.
#include "car.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

// Pre:  File dataIn has been opened.
// Post: The fields of car are read from file dataIn.
Car GetCar(ifstream& dataIn, Car allCars[], int carCount);

// Pre:  car holds a valid Car variable.
// Post: The fields of car are written to the screen,
//       appropriately labeled.
void WriteCar(Car car);

// Function should print the cars contained in the allCars array
// Pre: allCars[] contains 0 or more cars
//      carCount contains the number of cars in allCars[]
// Post: Contents of allCars[] printed to the screen
void PrintCars(Car allCars[], int carCount);


const int maxCar = 50;

int main () {
  ifstream dataIn;

  dataIn.open("cars.dat");
  int carCount = 0;
  Car allCars[maxCar];
    allCars[carCount] = GetCar(dataIn, allCars, carCount);
  while (dataIn) {
      carCount++;
      allCars[carCount].price = allCars[carCount].price * 1.10;
      allCars[carCount] = GetCar(dataIn, allCars, carCount);
  }
  PrintCars(allCars, carCount);

  return 0;
}

//*****************************************************

Car GetCar(ifstream&  dataIn, Car allCars[], int carCount) {
  Car car;
  dataIn >> car.customer.firstname >> car.customer.lastname;
  dataIn >> car.price  >> car.purchased.day
         >> car.purchased.month  >> car.purchased.year;
  dataIn.ignore(2, '\n');
  return car;
}

//*****************************************************

void  WriteCar(Car  car) {
  cout << fixed << noshowpoint << setprecision(0);
  cout << "Customer: " << car.customer.firstname << " "
                       << car.customer.lastname << endl
	   << "Price:    $" << car.price << endl
	   << "Purchased:"  << car.purchased.day << "/"
	   << car.purchased.month << "/"
	   << car.purchased.year << endl;
}

void PrintCars(Car allCars[], int carCount){
    for (int i = 0; i <= carCount; i++){
        cout << fixed << noshowpoint << setprecision(0);
        cout << "Customer: " << allCars[i].customer.firstname << " "
                           << allCars[i].customer.lastname << endl
           << "Price:    $" << allCars[i].price << endl
           << "Purchased:"  << allCars[i].purchased.day << "/"
           << allCars[i].purchased.month << "/"
           << allCars[i].purchased.year << endl;
        }
}

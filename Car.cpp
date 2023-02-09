#include"Car.h"

Car::Car() :Vehicle()
{
	doors = 0;
	transmission = nullptr;
	seats = 0;
	numOfCars++;
}
Car::Car(char*cn, char*col, int now, int pow, char*vt, int d, char*t, int s) :Vehicle(cn, col, now, pow, vt)
{
	doors = d;
	transmission = deepCopy(t);
	seats = s;
	numOfCars++;
}
Car::Car(const Car&obj) :Vehicle(obj)
{
	this->doors = obj.doors;
	this->transmission = deepCopy(obj.transmission);
	this->seats = obj.seats;
}
Car::~Car()
{

}
int Car::getDoors()const
{
	return doors;
}
char*Car::getTransmission()const
{
	return deepCopy(transmission);
}
int Car::getSeats()const
{
	return seats;
}
int Car::getCars()const
{
	return numOfCars;
}
void Car::setDoors(int d)
{
	doors = d;
}
void Car::setTransmission(char*t)
{
	transmission = deepCopy(t);
}
void Car::setSeats(int s)
{
	seats = s;
}
void Car::checkType()
{
	if (getWheels() == 4)
	{
		setVehicleType("Car");
	}
}
void Car::display()const
{
	cout << "Company Name : " << getCompanyName() << endl;
	cout << "Car Color : " << getColor() << endl;
	cout << "Wheels : " << getWheels() << endl;
	cout << "Power CC : " << getPower() << endl;
	cout << "Vehicle Type : " << getVehicleType() << endl;
	cout << "Doors : " << doors << endl;
	cout << "Transmission : " << transmission << endl;
	cout << "Seats : " << seats << endl;
	cout << "Available Cars : " << numOfCars << endl;
}

int Car::numOfCars = 0;
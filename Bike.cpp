#include"Bike.h"


Bike::Bike() :Vehicle()
{
	height = 0;
	selfStart = 0;
	discBrake = 0;
	numOfBikes++;
}
Bike::Bike(char*cn, char*col, int now, int pow, char*vt, double h, bool ss, bool db):Vehicle(cn, col, now, pow, vt)
{
	height = h;
	selfStart = ss;
	discBrake = db;
	numOfBikes++;
}
Bike::Bike(const Bike&obj) :Vehicle(obj)
{
	this->height = obj.height;
	this->selfStart = obj.selfStart;
	this->discBrake = obj.discBrake;
}
Bike::~Bike()
{

}
double Bike::getHeight()const
{
	return height;
}
bool Bike::getSelfStart()const
{
	return selfStart;
}
bool Bike::getDiscBrake()const
{
	return discBrake;
}
int Bike::getNumofBikes()const
{
	return numOfBikes;
}
void Bike::setHeight(double h)
{
	height = h;
}
void Bike::setSelfStart(bool ss)
{
	selfStart = ss;
}
void Bike::setDiscBrake(bool db)
{
	discBrake = db;
}
void Bike::checkType()
{
	if (getWheels() == 2)
	{
		setVehicleType("Bike");
	}
}
void Bike::display()
{
	cout << "Company Name : " << getCompanyName() << endl;
	cout << "Bike Color : " << getColor() << endl;
	cout << "Wheels : " << getWheels() << endl;
	cout << "Power CC : " << getPower() << endl;
	cout << "Vehicle Type : " << getVehicleType() << endl;
	cout << "Height : " << height << endl;
	if (selfStart == true)
	{
		cout << "Self Start : YES" << endl;
	}
	else
	{
		cout << "Self Start : NO" << endl;
	}
	if (discBrake == true)
	{

		cout << "Disc Brakes : YES"  << endl;
	}
	else
	{
		cout << "Disc Brakes : NO" << endl;
	}
	cout << "Number Of Bikes Available : " << numOfBikes << endl;
}


int Bike::numOfBikes = 0;
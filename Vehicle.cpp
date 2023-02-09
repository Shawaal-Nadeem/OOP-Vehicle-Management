#include"Vehicle.h"
char*deepCopy(char*p)
{
	int length = strlen(p);
	char*temp = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		temp[i] = p[i];
	}
	temp[length] = '\0';
	return temp;
}
Vehicle::Vehicle()
{
	companyName = nullptr;
	color = nullptr;
	numOfWheels = 0;
	powerCC = 0;
	vehicleType = nullptr;
}
Vehicle::Vehicle(char*cn, char*col, int now, int pow, char*vt)
{
	companyName = deepCopy(cn);
	color = deepCopy(col);
	numOfWheels = now;
	powerCC = pow;
	vehicleType = deepCopy(vt);
}
Vehicle::Vehicle(const Vehicle&obj)
{
	this->companyName = deepCopy(obj.companyName);
	this->color = deepCopy(obj.color);
	this->numOfWheels = obj.numOfWheels;
	this->powerCC = obj.powerCC;
	this->vehicleType = deepCopy(obj.vehicleType);
}
Vehicle::~Vehicle()
{

}
char*Vehicle::getCompanyName()const
{
	return deepCopy(companyName);
}
char*Vehicle::getColor()const
{
	return deepCopy(color);
}
int Vehicle::getWheels()const
{
	return numOfWheels;
}
int Vehicle::getPower()const
{
	return powerCC;
}
char*Vehicle::getVehicleType()const
{
	return deepCopy(vehicleType);
}
void Vehicle::setCompanyName(char*cn)
{
	companyName = deepCopy(cn);
}
void Vehicle::setColor(char*col)
{
	color = deepCopy(col);
}
void Vehicle::setWheels(int now)
{
	numOfWheels = now;
}
void Vehicle::setPower(int pow)
{
	powerCC = pow;
}
void Vehicle::setVehicleType(char*vt)
{
	vehicleType = deepCopy(vt);
}
void Vehicle::display()const
{

}
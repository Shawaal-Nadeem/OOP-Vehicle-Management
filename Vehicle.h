#include<iostream>
using namespace std;
class Vehicle
{
	char* companyName;
	char* color;
	int numOfWheels;
	int powerCC;
	char* vehicleType;
public:
	Vehicle();
	Vehicle(char*cn, char*col, int now, int pow, char*vt);
	Vehicle(const Vehicle&obj);
	~Vehicle();
	char*getCompanyName()const;
	char*getColor()const;
	int getWheels()const;
	int getPower()const;
	char*getVehicleType()const;
	void setCompanyName(char*cn);
	void setColor(char*col);
	void setWheels(int now);
	void setPower(int pow);
	void setVehicleType(char*vt);
	virtual void checkType() = 0;
	virtual void display()const;
};
char*deepCopy(char*p);
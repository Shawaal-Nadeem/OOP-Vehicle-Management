#include"Vehicle.h"

class Bike : public Vehicle
{
	double height;
	bool selfStart;
	bool discBrake;
	static int numOfBikes;
public:
	Bike();
	Bike(char*cn, char*col, int now, int pow, char*vt, double h, bool ss, bool db);
	Bike(const Bike&obj);
	~Bike();
	double getHeight()const;
	bool getSelfStart()const;
	bool getDiscBrake()const;
	int getNumofBikes()const;
	void setHeight(double h);
	void setSelfStart(bool ss);
	void setDiscBrake(bool db);
	void checkType();
	void display();
};
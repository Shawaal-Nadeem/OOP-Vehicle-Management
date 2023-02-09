#include"Vehicle.h"

class Car :public Vehicle
{
	int doors;
	char*transmission;
	int seats;
	static int numOfCars;
public:
	Car();
	Car(char*cn, char*col, int now, int pow, char*vt, int d, char*t, int s);
	Car(const Car&obj);
	~Car();
	int getDoors()const;
	char*getTransmission()const;
	int getSeats()const;
	int getCars()const;
	void setDoors(int d);
	void setTransmission(char*t);
	void setSeats(int s);
	void checkType();
	void display()const;
};
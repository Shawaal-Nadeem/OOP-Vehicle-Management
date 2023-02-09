#include"Bike.h"
#include"Car.h"
#include"Truck.h"
int main()
{
	Bike objB("Honda", "Red", 2, 125, "Bike", 1760, false, true);
	objB.checkType();
	objB.display();
	Car objB1("Honda","White",4,1800,"Sedan",4,"Auto",5);
	objB1.display();
	return 0;
}
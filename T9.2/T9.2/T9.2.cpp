#include <iostream>
#include<vector>
using namespace std;
class Vehicle {
public:
	virtual void start() = 0;
	virtual string getName() = 0;
};
class Rocket : public Vehicle {
private:
	string name;
public:
	Rocket(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return this->name;
	}
	void start()
	{
		cout << "start " << getName() << endl;
	}
};
class Car : public Vehicle {
private:
	string name;
public:
	Car(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return this->name;
	}
	void start()
	{
		cout << "start " << getName() <<  endl;
	}
};
int main() 
{

	Car* car1;
	car1 = new Car("red car");
	car1->start();
	
	Car* car2;
	car2 = new Car("awesome car");
	car2->start();

	Rocket* rocket;
	rocket = new Rocket("NASA rocket");
	rocket->start();
    
}
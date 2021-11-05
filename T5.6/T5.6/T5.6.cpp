#include <iostream>
#include <list>
using namespace std;

class Person {
private:
	string name;
public:
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return this->name;
	}
};
class Student : public Person
{
private:
	string school;
public:
	void setSchoolName(string school)
	{
		this->school = school;
	}

	string getSchoolName()
	{
		return this->school;
	}
};

class Engine
{
public:
	void start();
	void stop();
	void Engine::start()
	{
		cout << "start engine" << endl;
	}
	void Engine::stop()
	{
		cout << "stop engine" << endl;
	}

};

class Driver
{
public:
	string name;
	string getName()
	{
		return this->name;
	}
	void setName(string name)
	{
		this->name = name;
	}
};
class Car
{
public:
	Driver* driver;
	Engine* carEngine
		Car(string nameDriver)
	{
		this->driver.setName(nameDriver);
	}
	Driver* getDriver()
	{
		return this->driver;
	}
	Car()
	{
		carEngine = newEngine();
	}
	void start()
	{
		carEngine->start();
	}
	void stop()
	{
		carEngine->stop();
	}
};
class BusStation {
	list<Bus*> busses;
	Address* address;
	list<Mosquito*> mosquitos; // :)
	list<Commuter*> commuters; // maybe here because it suppose they all come to same bus station
}
class Bus {
	Engine* engine;
	Driver* driver;
	list<Commuter*> commuters; // probably, they will all get the same bus
	list<Mosquito*> mosquitos; // :) At least in Craiova, mosquitos are mandatories in busses :)
}
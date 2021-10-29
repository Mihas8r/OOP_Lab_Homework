#include <iostream>
using namespace std;

class AddressStation {
private:
	string street;
	int streetNumber;
public:
	AddressStation() {

	}
	AddressStation(string street, int streetNumber) {
		this->street = street;
		this->streetNumber = streetNumber;
	}
	void setStreet(string street) {
		this->street = street;
	}
	void setStreetNumber(int streetNumber) {
		this->streetNumber = streetNumber;
	}
	string getStreet() {
		return this->street;
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
class BusStation{
private:
	AddressStation* address;
public:
	BusStation(AddressStation* address) {
		this->address = address;
	}
	AddressStation* getAddress() {
		return this->address;
	}
};

int main()
{
	AddressStation* address = new AddressStation();
	cout << "Bus Station Adress:";
    address->setStreet("Calea Bucuresti");
	address->setStreetNumber(78);
	BusStation* station = new BusStation(address);
	cout << station->getAddress()->getStreet();
	cout << endl;

	Car* c("Alex");
	cout << "Driver Name:" << c.getDriver().getName() << endl;
	c->start();
	c->stop();
}
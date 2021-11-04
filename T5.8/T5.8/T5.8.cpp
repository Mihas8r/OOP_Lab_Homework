#include <iostream>
using namespace std;

class ComputingMachine
{
private:
	int speed;
public:
	ComputingMachine(int speed)
	{
		this->speed = speed;
	}
	void setSpeed(int speed)
	{
		this->speed = speed;
	}
	int getSpeed()
	{
		return speed;
	}
};


class Mechanism 
{
public:
	int data;
	int results;
public:
	Mechanism( int data, int results) 
	{
		this->data = data;
		this->results = results;
	}
	void setData(int data)
	{
		this->data = data;
	}
	int getData()
	{
		return this->data;
	}

	void setResults(int results)
	{
		this->results = results;
	}
	int getResults()
	{
		return this->results;
	}
	void showMessage() {
		cout << "message from Mechanism" << endl;
	}

};
class Computer : public ComputingMachine
{private:
	string memory;
public:
	Computer(string memory,int speed) : ComputingMachine(speed)
	{
		this->memory = memory;
	}
	void setMemory(string memory)
	{
		this->memory = memory;
	}
    string getMemory()
	{
		return this->memory;
	}
	void start()
	{
		cout << "Start from computer" << endl;
	}
	void stop()
	{
		cout << "Stop from computer" << endl;
	}
};

class Robot : public Mechanism, public Computer
{
protected:
	string name;
public:
	Robot(string name, int data, int results, string memory) : Mechanism(data, results), Computer(memory)
	{
		this->name = name;
	}
	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return this->name;
	}
	void showMessage()
	{
		Mechanism::showMessage();
		cout << "message from Robot" << endl;
	}
	void start() 
		{
			Computer::start();
			cout << "start robot";
	     }
	void stop()
	{
		Computer::stop();
		cout << "stop robot";
	}
	
};

int main()
{
	Robot* robot = new Robot("Raducu", 33, 566, "8GB");
	cout << " Robot " << robot->getName() << endl;
	robot->showMessage();
	cout << "Memory robot" << robot->getMemory() << endl;
	robot->start();
	robot->stop();
	cout << "Robot speed" << robot->getSpeed();

}

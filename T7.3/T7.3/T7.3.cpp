#include<iostream>
#include<vector>
using namespace std;

class Driver
{
	string name;
	int age;
public:
	Driver() : age(0), name("") {};
	Driver(string name, int age) :name(name), age(age) {};
	friend ostream& operator<<(ostream& os, const Driver& d) {
		cout << " [ " << d.name << " , " << d.age << " ] ";
		return os;
	}
	void setAge(int a)
	{
		age = a;
	}
	void setName(string nm)
	{
		name = nm;
	}
};

class Car
{
	int age;
	string color;
public:
	Car() : age(), color("") {};
	Car(int age, string color) :age(age), color(color) {};

	friend ostream& operator<<(ostream& OS, const Car& c) {
		cout << " [ " << c.age << " , " << c.color << " ] ";
		return OS;
	}
	void setAge(int a)
	{
		age = a;
	}
	void setColor(string c)
	{
		color = c;
	}

};
class CarDriver1to1
{
public:
	vector<pair<Car, Driver>> cardriver;
	void add(Car c, Driver d)
	{
		auto relation = make_pair(c, d);
		cardriver.push_back(relation);

	}
	void deleter(int relation)
	{
		cardriver.erase(cardriver.begin() + relation);
	}
	void modifyCar(int relation)
	{
		cout << "Modifica relatia : " << relation << " car...\n";
		cout << "   1. Schimba age\n";
		cout << "   2. Schimba color\n";
		cout << "   3. Schimba amandoua\n";
		int op; cin >> op;
		int age;
		string color;
		if (op == 1)
		{
			cin >> age;
			cardriver[relation].first.setAge(age);
		}
		if (op == 2)
		{
			cin >> color;
			cardriver[relation].first.setColor(color);
		}
		if (op == 3)
		{
			cin >> color >> age;
			cardriver[relation].first.setColor(color);
			cardriver[relation].first.setAge(age);
		}
	}
	void modifyDriver(int relation)
	{
		cout << "Modifica relatia : " << relation << " driver...\n";
		cout << "   1. Schimb name\n";
		cout << "   2. Schimb age\n";
		cout << "   3. Schimb amandoua\n";
		int op; cin >> op;
		int age; string name;
		if (op == 1)
		{
			cin >> name;
			cardriver[relation].second.setName(name);
		}
		if (op == 2)
		{
			cin >> age;
			cardriver[relation].second.setAge(age);
		}
		if (op == 3)
		{
			cin >> name >> age;
			cardriver[relation].second.setAge(age);
			cardriver[relation].second.setName(name);
		}
	}
	void display()
	{
		int i = 0;
		for (auto it : cardriver)
		{
			auto car = it.first;
			auto driver = it.second;
			cout << (i++) << ": " << car << "<->" << driver << '\n';

		}
	}
};
int main()
{
	Car car1(11, "verde"), car2(7, "negru");
	Driver driver1("Marcel", 20), driver2("Daniel", 20);
	auto a = new CarDriver1to1();
    a->add(car1, driver1);
	a->add(car2, driver2);

	a->display();
    a->modifyCar(0);
	a->display();
	a->modifyDriver(1);
	a->display();
    a->deleter(0);
	cout << "After deletion:\n";
	a->display();

}
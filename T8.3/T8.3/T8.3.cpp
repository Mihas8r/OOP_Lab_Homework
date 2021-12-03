#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;
 class Average
 {
 public:
	 template<typename T>
	 double average(T list)
	 {
		 double suma = 0;
		 for (double iterator = 0; iterator <= list.nr(); iterator++)
		 {
			 suma = suma + list[iterator].getAge();
		 }
	 }
 };

class Person {
	
public:
	int age;
	Person() {}
	Person(int age) {
		this->age = age;
	}
	int getAge() {
		return this->age;
	}
};
class Car {
private:
	int age;
public:
	Car(int age) {
		this->age = age;
	}
	Car() {}
	int getAge() {
		return this->age;
	}
};
int main() {
	vector<Person>personList;
	vector<Car>carList;

	Person person1(14), person2(45), person3(32),person4(23);
	personList.push_back(person1);
	personList.push_back(person2);
	personList.push_back(person3);
	personList.push_back(person4);


	Car car1(22), car2(66), car3(62), car4(83);
	carList.push_back(car1);
	carList.push_back(car2);
	carList.push_back(car3);
	carList.push_back(car4);

	cout << Average::average(personList) << endl;

	cout << Average::average(carList) << endl;
	
	return 0;
}
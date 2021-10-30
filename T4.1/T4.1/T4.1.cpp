#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name;
	int    age;
public:
	Person(string name = "unknown", int age = 0)
	{
		this->name = name;
		this->age = age;
	}

	void setName(string name)
	{
		this->name = name;
	}

	string getName()
	{
		return this->name;
	}
	void setAge(int n)
	{
		this->age = n;
	}
	int getAge()
	{
		return this->age;
	}
};

class StudentsGroup {
private:
	string name;
	string friends;
	list<Person*>friendsList;
public:
	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return this->name;
	}

	StudentsGroup(string friends)
	{
		this->friends = friends;
	}
	StudentsGroup()
	{
		this->friends = " noFriends";
	}
	void setFriends(string Friends) {
		this->friends = name;
	}
	string getFriends() {
		return this->name;
	}
	void addStudent(Person* person)
	{
		this->friendsList.push_back(person);
	}

	list<Person*>getfriendsList()
	{
		return this->friendsList;
	}

};

class Helpers
{
public:
	static void showStudents(list<Person*>personLis)
	{
		for (auto& Person : Person)
		{
			cout << Person->getName() <<" " <<Person->getAge() << endl;
		}
	}
};
int main()
{
	StudentsGroup* groupfriends = new StudentsGroup(3);
	groupfriends->addStudent(new Student());
	groupfriends->addStudent(new Student("Alex",17));
	groupfriends->addStudent(new Student("Miha",6));
	groupfriends->showStudents();

	return 0;
}
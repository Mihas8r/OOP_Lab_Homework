#include <iostream>
using namespace std;

class Student
{
private:
	string Student;
	int age;

public:
	void setStudent(string newStudent)
	{
		Student = newStudent;
	}
	string getStudent()
	{
		return Student;
	}
    void setAge(int newAge)
	{
		age = newAge;
	}
	int getAge()
	{ 
		return age; 
	}
};
int main()
{
	Student Student1 ;
	Student Student2 ;
	Student* ptrStudent;

	Student1.setStudent("Gabriel");
	Student2.setStudent("Alex");

	Student1.setAge(25);
	Student2.setAge(18);

	ptrStudent = &Student1;
	cout << "The age:" << ptrStudent->getAge() << endl;
	cout << "The name:" << ptrStudent->getStudent() << endl;

	ptrStudent = &Student2;
	cout << "The age:"<< ptrStudent ->getAge() << endl;
	cout << "The name:" << ptrStudent->getStudent() << endl;
	
}


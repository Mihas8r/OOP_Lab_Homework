#include <iostream>
using namespace std;

class Student
{
private:
	string name;
	int grade;

public:
	Student(string newName, int newGrade)
	{
		name = newName;
		grade = newGrade;
	}
	Student()
	{

	}
	void setName()
	{
		cout << "Name of the Student: ";
		cin >> name;
	}
	void setGrade()
	{
		cout << "Grade :"
			cin >> grade;
	}
	string getName()
	{
		return name;
	}
	int getGrade()
	{
		return grade;
	}
};
int main()
{
	int i, gradeMax;
	Student student[5];
	for (i = 1; i <= 5; i++)
	{
		student[i].setName();
		student[i].setGrade();
		cout << endl;
	}

	gradeMax = student[0].getGrade();
	int gradeMaxStudent = 0;

	for (i = 1; i <= 5; i++) {
		if (gradeMax < student[i].getGrade())
		{
			gradeMax = student[i].getGrade();
			gradeMaxStudent = i;
		}
	}
	cout << "Enter ID of student" << student[gradeMaxStudent].getName << ":\n";
	cout << "Enter gradeMax of student" << student[gradeMaxStudent].getName << endl;

	return 0;
}
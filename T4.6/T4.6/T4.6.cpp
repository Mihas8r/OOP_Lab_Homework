#include <iostream>
using namespace std;
class Student {

private:
	float grade;
public:
	Student(int grade = 0)
	{
		this->grade = grade;
	}
	void setGrade(int n) {
		this->grade = n;
	}
	int getGrade() {
		return this->grade;
	}
};
class StudentList {
private:
	int studentsNumber;
	Student* studentsList;
public:
	StudentList(int studentsNumber) {
		this->studentsNumber = studentsNumber;
		studentsList = new Student[studentsNumber];
	}
	void studentsmaxgrade() {
		int gradeMax;
		for (int i = 0; i < this->studentsNumber; i++)
		{
			if (studentsList[i].getGrade() > gradeMax)
			{
				gradeMax = studentsList[i];
				cout << gradeMax;
			}
		}
	}
};

int main()
{
	StudentList* studentlist = new StudentList(10);
	StudentList->studentsmaxgrade();
	return 0;
}

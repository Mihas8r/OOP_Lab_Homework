#include <iostream>
#include <string>
using namespace std;
class Student {
private:
	int grade;
	string name;
public:
	Student(int grade = 0, string name = "Joe Doe") {
		this->grade = grade;
		this->name = name;
	}
	void setGrade(int n) {
		this->grade = n;
	}
	int getGrade() {
		return this->grade;
	}
	string getName() {
		return this->name;
	}
	void setName(string name) {
		this->name = name;
	}
};
class StudentsGroup {
private:
	int studentsNumber;
	Student* studentsList;
public:
	StudentsGroup(int studentsNumber) {
		this->studentsNumber = studentsNumber;
		studentsList = new Student[studentsNumber];
	}
	void showStudentsInGroup() {
		for (int i = 0; i < this->studentsNumber; i++) {
			cout << i << " " << studentsList[i].getName() << " " << studentsList[i].getGrade() << endl;

		}
	}
	void readStudentGroup() {
		int grade;
		string studentName;
		for (int i = 0; i < this->studentsNumber; i++) {
			cout << "student " << i << " name:";
			cin >> studentName;
			cout << "grade";
			cin >> grade;
			studentsList[i].setGrade(grade);
			studentsList[i].setName(studentName);
		}
	}
};
int main()
{
	StudentsGroup* studentsGroup = new StudentsGroup(3);
	studentsGroup->readStudentGroup();
	studentsGroup->showStudentsInGroup();
	return 0;
}
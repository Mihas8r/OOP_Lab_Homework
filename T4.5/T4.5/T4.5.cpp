#include <iostream>
using namespace std;
class Student {

private:
	string name;
	float grade;

public:
	Student(int grade = 0, string name = "Ion") {
		this->grade = grade;
		this->name = name;
	}
	void setGrade(int n) {
		this->grade= n;
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
	void sortStudentsInGroupName() {
		Student temp;
		for (int i = 0; i < this->studentsNumber; i++) {
			if (studentsList[i].getName() > studentsList[i + 1].getName())
			{
				temp = studentsList[i];
				studentsList[i + 1] = studentsList[i];
				studentsList[i + 1] = temp;

				cout << studentsList[i].getName();
			}
		}
	}
		void sortStudentsInGroupGrade(){
		Student temp1;
		for (int i = 0; i < this->studentsNumber; i++) {
			if (studentsList[i].getGrade() > studentsList[i + 1].getGrade())
			{
				temp1 = studentsList[i];
				studentsList[i + 1] = studentsList[i];
				studentsList[i + 1] = temp1;

				cout << studentsList[i].getGrade();
			}
		}
	}
};


int main()
{
	StudentsGroup* studentsGroup = new StudentsGroup(4);
	studentsGroup->sortStudentsInGroupName();
	studentsGroup->sortStudentsInGroupGrade();
	return 0;
}
	

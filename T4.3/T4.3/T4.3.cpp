#include <iostream>
#include <list>
using namespace std;

class Student {
private:
    string name;
public:
    Student(string name) {
        this->name = name;
    }
    Student() {
        this->name = "noname";
    }
    string getName() {
        return this->name;
    }
};

class GroupOfStudents {
private:
    list <Student*>studentList;
public:
    void addStudent(Student* studentToAdd) {
        this->studentList.push_back(studentToAdd);
    }
    void displayStudentList() {
        for (Student* student : this->studentList) {
            cout << "Student:" << student->getName() << endl;
        }
    }
};

int main()
{
    GroupOfStudents* studentList = new GroupOfStudents();
    studentList->addStudent(new Student());
    studentList->addStudent(new Student("Robert"));
    studentList->addStudent(new Student("Alexandra"));
    studentList->displayStudentList();

}
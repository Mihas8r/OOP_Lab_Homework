#include <iostream>
#include <list>
using namespace std;
class Group
{
    class Student
    {
    private:
        string name;
        float  grade;
    public:
        Student(string name = "unknown", float grade = 0) : name(name), grade(grade) {}

        void setName(string name)
        {
            this->name = name;
        }
        string getName()
        {
            return this->name;
        }

        void setGrade(float grade)
        {
            this->grade = grade;
        }
        float getGrade()
        {
            return this->grade;
        }
};
class StudentListHelper
{
public:
    list<Student*>myList;
    static void addStudent(Student* student)
    {
        Group.push_back(student);
    }

    static void printList(const list<Student*>& myList)
    {
        int index = 1;
        cout << "My list is:" << endl;
        for (auto& it : myList)
            cout << index++ << ". " << it->getName() << " " << it->getGrade() << endl;
    }
};
};
int main()
{
    Group::Student object;
   list<Student*> myList;
   Student student1("Mara", 4.6), student2("Alex", 8), student3("Olga", 7);
   myList.push_back(student1);
   myList.push_back(student2);
   myList.push_back(student3);
  

    myList::printList(myList);
    
    object.setName("Maria");
    object.setGrade(9);
    cout << object.getName() << " " << object.getGrade();
    return 0;
}
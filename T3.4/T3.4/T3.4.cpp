#include <iostream>
using namespace std;
#define MAX 100
class Student
{
private:
	string name;
	int grade;
	int n;
public:
	void getName()
	{
		cout << "Name of the Student: ";
		cin >>name;
	}
	void getGrade()
	{
		cout << "Grade :"
	    cin >> grade;
	}
	int higherGrade(int maxGrade)
	{
		int i;
		for ( i = 1; i<= n;i++)
		if (grade < maxGrade)
			maxGrade = grade;
		return name[i];

	}
	
};
int main()
{
    Student std[MAX];      
    int n , i;

	cout << "Enter total number of students: ";
	cin >> n;

	for (i = 0; i <= n; i++) {
		cout << "Enter name of student " << i + 1 << ":\n";
		std[i].getName();
	}
	cout << endl;
	for (i = 0; i <= n; i++) {
		cout << "Enter grade of student" << i + 1 << ":\n";
		std[i].higherGrade(i);
	}

    return 0;
}
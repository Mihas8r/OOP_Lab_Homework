#include <iostream>
using namespace std;

class StudentStatic
{
private:
    int studentnr;
    static int count;
public:
	StudentStatic()
	{
		studentnr = ++count;
	}
	~StudentStatic()
	{
	  count--;
	}
	void printStudentNumber(void)
	{
		cout << "Student number:" << studentnr << "\n";
	}
	static void printStudentCount(void)
	{
		cout << " count:" << count << "\n";
	}
};
int StudentStatic::count;
int main()
{
	StudentStatic S1,S2;
	StudentStatic::printStudentNumber();
	StudentStatic S3;
	StudentStatic::printStudentCount();
    
	S1.printStudentNumber();
	S2.printStudentNumber();
	S3.printStudentNumber();

	return 0;
}
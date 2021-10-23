#include <iostream>
using namespace std;
class Student
{
public:
	int data;
    Student* next;

     Student()
	{
		data = 0;
		next = NULL;
	}
	 Student(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};
class Linkedlist
{
	Student* head;
public:
	Linkedlist()
	{
		head = NULL;
	}
	void printList(list<int>myList)
	{
		list<int>::iterator it;
		for (it = mylist.begon(); it != mylist.end(); ++it)
			cout << *it<< " ";
		cout << endl;

	}

		
};
int main()
{
	list<int> myList(10, 100);
	printList(myList);
}

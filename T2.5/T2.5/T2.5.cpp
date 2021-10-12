

#include <iostream>
using namespace std;
int f(int x)
{
	return sizeof(int);
}
int f(double x)
{
	return sizeof(double);
}
int f(char x) 
{
	return sizeof(char);
}
int main()
{

	cout << "Computing the size of some C++ inbuilt variable types" << endl;
	cout << "Size of int: " << f(2) << " byte"  << endl ;
	cout << "Size of double :" << f(2.8) << " byte" << endl ;
	cout << "Size of char :" << f('a') << " byte" << endl;
	return 0;
}


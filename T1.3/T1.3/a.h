#include <iostream>
using namespace std;
int test(int multiplication)
{
	int x, y;
	cout << "x= ";  
	cin >> x;
	cout << "y= ";
	cin >> y;
	multiplication = x * y;
	return multiplication;
}

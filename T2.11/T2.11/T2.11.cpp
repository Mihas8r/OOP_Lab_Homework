#include <iostream>
using namespace std;
int substraction(int x, int y)
{
	return x - y;
}
int main()
{
	int(*funcPtr)(int, int) = substraction;
	cout << substraction(3, 2) << endl;
	cout << funcPtr(3, 4) << endl;
	return 0;
}
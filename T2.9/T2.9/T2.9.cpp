

#include <iostream>
using namespace std;
template < typename T>
T Max(T a, T b)
{
    return (a + b);
}
int main()
{
    cout << "Addition of 2 integers 2 and 4 is : " << Max <int>(2, 4) << endl;
    cout << "Addition of 2 float variables 2.4 and 4.3 is : " << Max <float>(2.4, 4.3) << endl;
    cout << "Addition of 2 double variables 2.65 and 4.89 is : " << Max <double>(2.65, 4.89) << endl;
    return 0;
}

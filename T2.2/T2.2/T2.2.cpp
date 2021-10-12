

#include <iostream>
using namespace std;
int f(float n, bool isRoundedTo100 = false)
{
    if (isRoundedTo100 == false)
        return lround(n);
    else
        return lround(n) * 100;
}
int main()
{
    float n,isRoundedTo100;
    cout << "n= ";
    cin >> n;
    cout << "isRoundedTo100 = ";
    cin >> isRoundedTo100;
    cout << f(n, isRoundedTo100);
}


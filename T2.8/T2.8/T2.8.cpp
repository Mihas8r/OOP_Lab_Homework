#include<iostream>
using namespace std;

template<typename T> T FindMax(T x, T y, T z)
{
    if (x >= y)
    {
        if (x >= y)
            return x;
        else
            return y;
    }
    else
    {
        if (y >= z)
            return y;
        else
            return z;
    }
}
int main()
{
    int x, y, z, max;

    cout << "\n Enter Three Numbers";
    cout << "\n --------------------------";
    cout << "\n First Number : ";
    cin >> x;

    cout << "\n Second Number : ";
    cin >> y;

    cout << "\n Third Number : ";
    cin >> z;

    max = FindMax(x, y, z);

    cout << "\n Largest Number is : " << max;

    return 0;
}

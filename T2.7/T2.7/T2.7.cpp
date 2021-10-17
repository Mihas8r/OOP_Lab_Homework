#include <iostream>
using namespace std;

struct nrComplex
{
    double imaginaryPart;
    double realPart;
}complexNumber;

int f(float a, float b)
{
    if (b == 0)
        if (a < 0)
        {
            a = a * (-1);
            return a;
        }
        else
            return a;
    else
    {
        return sqrt(a * a + b * b);
    }

}

int main()
{
    complexNumber.imaginaryPart = 6;
    complexNumber.realPart = 8;
    cout << f(complexNumber.imaginaryPart, complexNumber.realPart) << endl;
    cout << f(9,0) << endl;
    cout << f(-7, 0) << endl;
    cout << f(4, 3) << endl;
    return 0;
}

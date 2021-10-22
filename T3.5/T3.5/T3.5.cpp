#include <iostream>
using namespace std;

class ComplexNumber
{
public:
    int real, imaginary;
};
int main()
{
    ComplexNumber nr1, nr2, sum;

    cout << "Enter real and imaginary parts of first complex number:" << endl;
    cin >> nr1.real >> nr1.imaginary;


    cout << "Enter real and imaginary parts of second complex number:" << endl;
    cin >> nr2.real >> nr2.imaginary;

    sum.real = nr1.real + nr2.real;
    sum.imaginary = nr1.imaginary + nr2.imaginary;

    if (sum.imaginary >= 0)
        cout << "Sum of two complex numbers = " << sum.real << " + " << sum.imaginary << "i";
    else
        cout << "Sum of two complex numbers = " << sum.real << " - " << sum.imaginary << "i";
    return 0;
}
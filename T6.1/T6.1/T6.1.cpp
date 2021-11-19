#include <iostream>
#include <cmath>
using namespace std;

class ComplexNumber
{
public:
    double real, imag;

    ComplexNumber(double real = 0, double imag = 0) {
        this->real = real;
        this->imag = imag;
    }
};


class Operations :ComplexNumber {
public:
	double a;
	Operations() {
		this->a = a;
	}
	void setNumber(double a) {
		this->a = a;
	}
	double getNumber() {
		return a;
	}
	void module() {
        if (a > 0)
             cout << a;
        else
            cout << (-1) * a;
	}
	ComplexNumber module(ComplexNumber value)
	{
		value = sqrt(real * real + imag * imag);
		return value;
	}
};

int main()
{
	Operations modulus;
	modulus.setNumber(-2);
	cout << modulus.module() << endl;
	ComplexNumber c(3, 4);
	ComplexNumber complex;
	complex = modulus.module(c);
	cout << complex;
	return 0;
}

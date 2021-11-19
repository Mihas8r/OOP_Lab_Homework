#include<iostream>
using namespace std;

class ComplexNumber
{
    double real,img;

public:

    ComplexNumber(double real = 0, double img = 0); 
    ComplexNumber operator+(const ComplexNumber&) const;      
};

ComplexNumber::ComplexNumber(double r, double i)
{
    real = r;
    img = i;
}


ComplexNumber ComplexNumber::operator+ (const ComplexNumber& c) const
{
    ComplexNumber addition;
    addition.real = (this->real + c.real);
    addition.img = (this->img + c.img);
    return addition;
}

int main()
{
    ComplexNumber x(4, 4);
    ComplexNumber y(6, 6);
    ComplexNumber z = x + y; 
}
	
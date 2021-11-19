#include <iostream>
using namespace std;

class Complex {
public:
    int real, imaginary;
    Complex(int real = 0, int imaginary = 0) {
        this->real = real;
        this->imaginary = imaginary;
    }
    int getReal() {
        return this->real;
    }
    int getImaginary() {
        return this->imaginary;
    }
    bool operator + (Complex& complex)
    {
        cout << "Sum of (" << this->getReal() << "+" << this->getImaginary() << "i) + (" <<
            complex.real << "+" << complex.imaginary << "i): " <<
            this->getReal() + complex.real << "+" << this->getImaginary() + complex.imaginary << "i" << endl;
        return 0;
    }
    bool operator ~ ()
    {
        cout << "Modulus of (" << this->getReal() << "+" << this->getImaginary() << "i): "
            << sqrt(this->getReal() * this->getReal() + this->getImaginary() * this->getImaginary()) << endl;
        return 0;
    }
    bool operator ^ (int power) 
    {
        complex <double> Complexnumber(this->getReal(), this->getImaginary());
        cout << "Square of (" << this->getReal() << "+" << this->getImaginary() << "i): "
            << pow(Complexnumber, power) << endl;
        return 0;
    }
};

int main()
{   
    Complex c1(2, 3);
    Complex c2(4, 3);
    Complex c3(8, 6);
    bool rezultat1 = c1 + c2;
    cout << rezultat1;
    bool rezultat2 = c1 ^ 2;
    cout << rezultat2;
    bool rezultat3 = ~c1;
    cout << rezultat3;
}
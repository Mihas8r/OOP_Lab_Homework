#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class ComplexNumber {
	int real,imaginary;
public:
	ComplexNumber(int real,int imaginary) {
		this->real = real;
		this->imaginary = imaginary;
	}
	ComplexNumber(){}
	float module()
	{
		float modulecomplex;
		modulecomplex = sqrt(real * real + imaginary * imaginary);
		return modulecomplex;
	}
};
class FloatNumber {
private:
	float value;
public:
	FloatNumber(float value) {
		this->value = value;
	}
	FloatNumber(){}
	float module()
	{
		float modulefloat;
		modulefloat = abs(value);
		return modulefloat;
	}
};
template <class T,class U>
class TwoClasses {
	T* a;
	U* b;
public:
	TwoClasses(T* modulecomplex, T* modulefloat)
	{
		a = modulecomplex;
		b = modulefloat;
	}
	float getMax() {
		float result;
		result = (float)a.module() > b.module() ? a.module() : b.module();
		return result;
	}
};
int main()
{	
	ComplexNumber  C1(3,4);
    FloatNumber F1(-5);
    TwoClasses<ComplexNumber, FloatNumber>object(C1, F1);
	cout << object.getMax()<< endl;
	return 0;
}
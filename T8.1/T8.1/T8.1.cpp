#include <iostream>
#include <string>
using namespace std;
template <class T>
class ComplexNumber {
	T real, imaginary;
public:
	ComplexNumber(T real , T imaginary )
	{
		this->real = real;
		this->imaginary = imaginary;
	}
	T module1(ComplexNumber C1) 
	{
		double value1;
		value1 = sqrt(C1.real * C1.real + C1.imaginary * C1.imaginary);
		return value1;
	}

	T module2(ComplexNumber C2)
	{
		double value2;
		value2 = sqrt(C2.real * C2.real + C2.imaginary * C2.imaginary);
		return value2;
	}
	
	T getMin() {
		T result;
		result = this->value1 < this->value2 ? this->value1 : this->value2;
		return result;
	}
	
	T getMin(T value1, T value2) {
		T result;
		result = value1 < value2 ? value1 : value2;
		return result;
	}
};
int main() {
	
	// First Complex number
	ComplexNumber <int> C1(3, 4);
	// Second Complex number
	ComplexNumber <int> C2(6, 8);

	double value1, value2;
	int minimum;
	
	value1 =  C1.module1(C1);
	cout << "Module for first complex number:" << " "<< value1;
	cout << endl;
	
	value2 = C2.module2(C2);
	cout << "Module for second complex number:" << " " << value2;
	cout << endl;

	ComplexNumber <double> min(value1, value2);
	minimum = min.getMin(value1, value2);
	cout << "Minimum module:" << " " << minimum;
	
	return 0;
}
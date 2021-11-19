#include <iostream>

using namespace std;

class ComplexNumber {
public:
	int real, img;
	ComplexNumber(int real = 0, int img = 0) {
		this->real = real;
		this->img = img;
	}
};

class Operations :ComplexNumber {
public:
	ComplexNumber c1, c2, c;
	double x, y;
	Operations() {
		this->x = x;
		this->y = y;
	}
	void setNumber1(double x) {
		this->x = x;
	}
	void setNumber2(double y) {
		this->y = y;
	}
	double getNumber1() {
		return x;
	}
	double getNumber2() {
		return y;
	}

	int sum() {
		return x + y;
	}
	ComplexNumber sum(ComplexNumber c1, ComplexNumber c2) {

		c.real = c1.real + c2.real;
		c.img = c1.img + c2.img;
		return c;
	}
};

int main() {
	Operations instanceOfOperations;
	instanceOfOperations.setNumber1(2);
	instanceOfOperations.setNumber2(3);
	cout << instanceOfOperations.sum() << endl;
	ComplexNumber c1(1, 2);
	ComplexNumber c2(3, 4);
	ComplexNumber complex;
	complex = instanceOfOperations.sum(c1, c2);
	cout << complex.real << "+" << complex.img << 'i';

    return 0;
}
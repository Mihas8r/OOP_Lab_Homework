#include <iostream>
using namespace std;
class Form {
private:
	string color;
protected :      //for getter/setter private or protected behave the same
	string getColor() {
		return this->color;
	}
	void setColor(string color) {
		this->color = color;
	}
};
class Rectangle :public Form {
protected:
	int width;
	int height;
public:
	void setWidth(int width) {
		this->width = width;
	}
	int getWidth() {
		return this->width;
	}
};
int main()
{   // the difference between private and protected is that 
	// private can be accessed in the same class while
	//protected can be accessed in the same class or 
	//in a class that is derived from that class(extended class)
	Form* f = new Form();
	f->setColor("red"); //Error	C2248 'Form::setColor': cannot access
	//protected member declared in class 'Form'	
    cout << "culoarea: " << f->getColor() << endl;//Error(active)	E0265	function "Form::getColor" (declared at line 7) is inaccessible 
	Rectangle* r = new Rectangle();
	r->setWidth(23);
	r->setColor("black");
	cout << "rectangle color: " << r->getColor() << " width:" << r->getWidth() << endl;
	return 0;
}
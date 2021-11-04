#include <iostream>
using namespace std;
class Form {
private:
	string color;
protected:
	string name;
protected:
	void testProtected()
	{
		cout << "Test Protected from Person with name: " << this->name << endl;
	}

	void setColor(string color) {
		this->color = color;
	}
public:
	Form() {
		this->name = "Alexandra";
		cout << "Constructor from Form" << endl;
	};
	Form(string name) {
		this->name = name;
	};
	~Form() {
		cout << "Destructor form" << this->getName() << endl;
	}
	string getName() {
		return this->name;
	}
};
class Rectangle :public Form {
protected:
	int width;
	int height;
public:
	Rectangle()
	{
		cout << "Constructor from rectangle";
	};
	Rectangle(string name, int width, int height) : Form(name)
	{
		this->width = width;
		this->height = height;
	};
	~Rectangle()
	{
		cout << "Destructer rectangle" << getName() << endl;
	};
	void setWidth(int width) {
		this->width = width;
	}
	int getWidth() {
		return this->width;
	}
	void test()
	{
		cout << getName() << "  " << getWidth() << endl;
		testProtected();
	}
};
int main()
{
	Form* f;
	f = new Form("forma1");
	cout << "forma: " << f->getName() << endl;

	Rectangle* r = new Rectangle("rectangle 1", 1, 2);
	cout << "rectangle name: " << r->getName() << " width:" << r->getWidth() << endl;
	return 0;
}
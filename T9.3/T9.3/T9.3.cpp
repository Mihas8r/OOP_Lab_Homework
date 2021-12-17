#include <iostream>
#include <string>
using namespace std;
class Shape
{
public:
	virtual void getArea() = 0;
};
class Circle : public Shape
{
private:
	int radius;
public:
	Circle(int radius)
	{
		this->radius = radius;
	}
	void getArea()
	{
		cout << "Area of circle is " << 3.14 * radius * radius;
	}
	
};
class Rectangle : public Shape
{
private:
	int length;
	int width;
public:
	Rectangle(int length, int width)
	{
		this->length = length;
		this->width = width;
	}
	void getArea()
	{
		cout << "Area of rectangle is " << length * width;
	}
};
class Square : public Shape
{private:
	int side;
public:
	Square(int side)
	{
		this->side = side;
	}
	void getArea()
	{
		cout << "Area of square is " << side * side;
	}
};
int main()
{
	Circle* circle;
	circle = new Circle(6);
	circle->getArea();
	cout << endl;

	Rectangle* rectangle;
	rectangle = new Rectangle(3, 6);
	rectangle->getArea();
	cout << endl;
 
	Square* square;
	square = new Square(2);
	square->getArea();
	cout << endl;
}
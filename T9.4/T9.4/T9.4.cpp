#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Shape
{
public:
	virtual double getArea() = 0;
};
class Circle : public Shape
{
private:
	double radius;
public:
	Circle(int radius)
	{
		this->radius = radius;
	}
	double getArea()
	{
		cout << (double)(3.14*radius*radius);
		return (double)(3.14*radius*radius);
	}

};
class Triangle: public Shape
{
private:
	double base;
	double height;
public:
	Triangle(int base, int height)
	{
		this->base = base;
		this->height = height;
	}
	double getArea()
	{
		cout << (double)((base*height)/2);
		return (double)((base*height) / 2);
	}
};
class Square : public Shape
{
private:
	double side;
public:
	Square(int side)
	{
		this->side = side;
	}
	double getArea()
	{
		cout << (double)(side*side);
		return (double)(side*side);
	}
};
int main()
{
	Circle* circle;
	circle = new Circle(1);
	circle->getArea();
	cout << endl;

	Triangle* triangle;
	triangle = new Triangle(3, 6);
	triangle->getArea();
	cout << endl;

	Square* square;
	square = new Square(2);
	square->getArea();
	cout << endl;
	vector<Shape*>shapes;
	shapes.push_back(new Circle(1));
	shapes.push_back(new Triangle(3, 6));
	shapes.push_back(new Square(2));

	double sum = 0 ;
	for (auto element : shapes)
	{
		
		cout << endl;
		sum += element->getArea();
	}
	cout << endl;
	cout << sum;
	cout << endl;
}
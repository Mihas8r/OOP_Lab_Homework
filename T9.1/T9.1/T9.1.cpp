#include <iostream>
#include <string>
using namespace std;
class Shape
{
public:
	virtual void draw() = 0; 
};
class Circle : public Shape
{
public:
	void draw() { cout << "circle\n"; } // we specify the behavior for this shape
};
class Triangle : public Shape
{
public:
	void draw() { cout << "triangle\n"; } // we specify the behavior for this shape
};
class Drawing 
{
	Shape* shape;
public:
	Drawing(Shape* shape)
	{
		this->shape = shape;
	}
	void drawShape() 
	{
		shape->draw();
	}
	
};
int main()
{
	Drawing* d = new Drawing(new Triangle());
	d->drawShape();
	d = new Drawing(new Circle());
	d->drawShape();

}

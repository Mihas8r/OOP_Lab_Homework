#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Shape
{
public:
    virtual double getSize() = 0;
    virtual double expectedArea() = 0;
};
class Square 
{
private:
    double size;
    double area;
public:
    Square(double size)
    {
        this->size = size;
    }
    double getSize()
    {
        return this->size;
    }
    double expectedArea()
    {   
        if (size < 0)
            area = NULL;
        else
            area = (double)(size * size);
        return area;
    }
};
class Test : public Square {
private:
    Square* square;
    double expectedSize;
    bool expectedCorrectArea;
public:
    Test(Square* square, double expectedSize, bool expectedCorrectArea)
    {
        this->square = square;
        this->expectedSize = expectedSize;
        this->expectedCorrectArea = expectedCorrectArea;
    }
    bool isSizeCorrect() {
        return this->square->getSize() == this->expectedSize ? true : false;
    }
    bool isSquareAreaValid(double size, double expectedArea) {
        if (this->square->expectedArea() == this->expectedCorrectArea)
            cout << "The function works good";
        else
            cout << "The function doesn't work";
    }
};

int main()
{
    Square* square = new Square(2);
    cout << square->getSize() << endl;
    cout << square->expectedArea() << endl;

    Test* test = new Test(square, 2 , false);
    cout << test->isSizeCorrect() << endl;
    cout << test->isSquareAreaValid(2,4) << endl;

}
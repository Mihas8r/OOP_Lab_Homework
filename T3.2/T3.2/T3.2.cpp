#include <iostream>
using namespace std;

class Kitty
{
private:
    string name;
    string color;
    int weight;

public:
    void setName(string newName)
    {
        name = newName;
    }
    string getName()
    {
        return name;
    }
    void setColor(string newColor)
    {
        color = newColor;
    }
    string getColor()
    {
        return color;
    }
    void setWeight(int newWeight)
    {
        weight = newWeight;
    }
    int getWeight()
    {
        return weight;
    }
    void meow()
    {
        cout << "meowwww";
        cout << endl;
    }
 
};
int main()
{
    Kitty cat;
    
    cout << "Please enter the name of the cat.\n";
    cat.setName("Motanel");
    cout << cat.getName();

    cout << "Please enter the color of the cat.\n";
    cat.setColor("portocaliu");
    cout << cat.getColor();

    cout << "Please enter the weight of the cat.\n";
    cat.setColor("1.5 kg");
    cout << cat.getWeight();
    cout << cat.meow();

    return 0;
}

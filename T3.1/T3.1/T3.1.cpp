#include <iostream>
using namespace std;

class Car
{
private : 
    string color;
    int speed;
    int acceleration;
    int speedStop;
  
public:
    void setColor(string newColor)
    {
        color = newColor;
    }
    string getColor()
    {
        return color;
    }      
    void setSpeed(int newSpeed)
    {
        speed = newSpeed;
    }
    int getSpeed()
    {
        return speed;
    }
    void setAcceleration(int newAcceleration)
    {
        acceleration = newAcceleration;
    }
    int getAcceleration()
    {
        return acceleration;
    }
    void setstop(int newSpeedStop)
    {
        speedStop = newSpeedStop;
        if (newSpeedStop > 0)
            newSpeedStop = 0;
     
    }
    int getStop()
    {
        return speed;
        
    }
};
int main()
{
    Car c;
    cout << "Please enter the color of the car.\n";
    c.setColor("Rosu");
    cout << c.getColor();
    cout << endl;

    cout << "Please enter the speed of the car.\n";
    c.setSpeed(200);
    cout << c.getSpeed();
    cout << endl;
    
    cout << "Please enter the acceleration of the car.\n";
    c.setAcceleration(100);
    cout << c.getAcceleration();
    cout << endl;
    
    cout << "Please enter the speedStop of the car.\n";
    c.setStop(70);
    cout << c.getStop();


   }

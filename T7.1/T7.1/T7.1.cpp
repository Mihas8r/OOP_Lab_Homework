#include<iostream>
using namespace std;

class Hummer
{
public:
	class Wheel
	{
    private:
        string wheelhummer;
    public:
        void getWheel(string wheel)
        {
            wheelhummer = wheel;
        }
        void setWheel()
        {
            cout << "The wheel is" <<" "<< wheelhummer;
        }
        void addWheel()
        {
            cout << "The wheel is added";
        }
        void replaceWheel()
        {
            cout << "The wheel is replaced";
        }
	};

};


class Carriage
{
public:
    class Wheel
    {
    private:
        string wheelcarriage;
    public:
        void getWheel(string wheel)
        {
            wheelcarriage = wheel;
        }
        void setWheel()
        {
            cout << "The wheel is" << " " << wheelcarriage;
        }
        void addWheel()
        {
            cout << "The wheel is added";
        }
        void replaceWheel()
        {
            cout << "The wheel is replaced";
        }
    };

};
int main()
{
    Hummer::Wheel object;
    object.getWheel("roata masina");
    object.setWheel();
    cout << endl;
    object.addWheel();
    cout << endl;
    object.replaceWheel();

    cout << endl;
    cout << endl;

    Carriage::Wheel object1;
    object1.getWheel("roata caruta");
    object1.setWheel();
    cout << endl;
    object1.addWheel();
    cout << endl;
    object1.replaceWheel();


}
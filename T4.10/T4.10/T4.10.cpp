#include <iostream>
#include <string>
#include <list>
using namespace std;

class Driver {
private:
    string name;
    
public:
    string setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
};
class Car {
private:
    Driver* driver;
    string licenseNumber;
    string identityCardSeries;
public:
    Car(string licenseNumber, string identityCardSeries, string nameDriver) {
        this->licenseNumber = licenseNumber;
        this->driver.setName(nameDriver);
        this->identityCardSeries = identityCardSeries;
    }
    int getLicenseNumber()
    {
        return this->getLicenseNumber;
    }
    int getIdentityCardSeries()
    {
        return this->getIdentityCardSeries;
    }

    Driver getDriver() {
        return this->driver;
    }
};
int main() 
{
    Car c("DJ 98 GGG","AAAA","Alex");
    cout << "LicenseNumber" << c.getLicenseNumber() << endl;
    cout << "IdentityCardSeries" << c.getIdentityCardSeries() << endl;
    cout << "Drivername: " << c.getDriver().getName() << endl;
    return 0;
}






    
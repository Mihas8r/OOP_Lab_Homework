#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Sofer {
public:
	string nume;
	string getNume() {
		return this->nume;
	}
	void setNume(string nume) {
		this->nume = nume;
	}
};

class Masina {
public:
	int virsta;
	Sofer sofer;
	Masina(int virsta, string numeSofer) {
		this->virsta = virsta;
		this->sofer.setNume(numeSofer);
	}
	int getVirsta() {
		return this->virsta;
	}
	Sofer getSofer() {
		return this->sofer;
	}
	void schimbsofer()
	{
		Masina temp,m1,m2;
		temp = m1.getSofer().getNume();
		m2.getSofer().getNume() = m1.getSofer().getNume();
		m2.getSofer().getNume() = temp;
	}
};

int main() {
	Masina m(18, "Alex");
	cout << "virsta masinii: " << m.getVirsta() << endl;
	cout << "nume sofer: " << m.getSofer().getNume() << endl;
	
	Masina m1(22, "Anto"); 
	Masina m2(30, "Ion"); 
	cout << m1.getSofer().getNume();
	cout << m2.getSofer().getNume();

}
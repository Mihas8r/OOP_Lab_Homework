#include <iostream>

class A
{
public:
	int aa;
protected:
	int ab;
private:
	int ac;
	public:
		void testA() {
		// set the attributes in class A
			aa = 5;
			ab = 3;
			ac = 1;
	}
};
class B : public A     //for public/private/protected A it behaves the same
{
public: 
int ba;
protected:
int bb;
private:
int bc;
public:
	void testB() {
	// set values for the attributes in classes B and A
		//ac = 1; // member inaccessible
		 // Error E0265 member "A::ac"  is private

		ab = 3;
		aa = 5;

		ba = 2;
		bb = 8;
		bc = 9;

	}
};
class C : public B   //for public/private/protected B it behaves the same
{
public:
int ca;
protected:
int cb;
private:
int cc;
public :
	void testC() {
	// set values for the attributes in classes C, B and A
		//ac = 1; // member inaccessible
		// Error E0265 member "A::ac"  is private(inaccessible)

		ab = 3;
		aa = 5;

		//bc = 9; // member inaccessible see above;
		bb = 8;
		ba = 2;

		ca = 4;
		cb = 5;
		cc = 6;

	}
};

int main()
{
	A a;
	// the only A class members to be accessed from public scope
	a.testA();
	a.aa = 10; // the only member accesible from public scope
	//a.ab = 6; //Error(active)	E0265	member "A::ab" (declared at line 8) is inaccessible	

	B b;
	b.testA();
	b.testB();
	b.aa = 11; // because of class B : public A
	b.ba = 12;

	C c;
	c.testA();
	c.testB();
	c.testC();
	c.aa = 13;
	c.ba = 14;
	c.ca = 15;

	return 0;
}
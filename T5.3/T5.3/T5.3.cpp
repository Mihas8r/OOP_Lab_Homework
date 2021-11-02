#include <iostream>
#include "classA.h"

int main()
{
	classA a;
	// the only A class members to be accessed from public scope
	a.testA();
	a.aa = 10; // the only member accesible from public scope
	//a.ab = 6; //Error(active)	E0265	member "A::ab" (declared at line 8) is inaccessible	
	return 0;
}
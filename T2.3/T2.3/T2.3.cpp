// T2.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using namespace std;

struct Student
{
    int nota;
    string nume;
}s1,s2;

template < typename t>
void Max(t s1, t s2)
{
    if (s1.nota > s2.nota)
        cout << s1.nume << ":" << s1.nota;
    else
        cout << s2.nume << ":" << s2.nota;

}
int main()
{
    s1.nota = 8;
    s1.nume = "Maria";
    s2.nota = 9;
    s2.nume = "Florian";
    Max(s1, s2);
}

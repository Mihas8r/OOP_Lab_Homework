
#include <iostream>
using namespace std;

template < typename T>
void swap(T a, T b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a=4, b=9;
    cout << a << " " << b << endl;
    swap <int> (a, b);
    cout << a << "" << b << endl;

    char c = 'c', d = 'd';
    cout << c << " " << d << endl;
    swap <char>(c, d);
    cout << c << " " << d << endl;

    float e = 3.9, f = 5.9;
    cout << e << " " << f << endl;
    swap <float>(e, f);
    cout << e << " " << f << endl;

    double g = 3.944, h = 5.679;
    cout << g << " " << h << endl;
    swap <double>(g, h);
    cout << g << " " << h << endl;
    
    return 0;
}


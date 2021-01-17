#include <iostream>
using namespace std;

int main()
{
    unsigned int order;     //n parameter in recursive function
    double angle;           //x parameter in recursive function

    cout << "------- consecutive cosines -------" << endl;
    cout << "f(n, x) = cos(f(n-1, x))" << endl;
    cout << "f(1, x) = cos(x)" << endl;
    cout << ">>> Enter n = ";
    cin >> order;
    cout << ">>> Enter (angle in degree) x = ";
    cin >> angle;

    return 0;
}
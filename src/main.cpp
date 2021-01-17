#include <iostream>
#include <iomanip>
using namespace std;
#include "functions.hpp"

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
    angle = degreesToRadians(angle);
    cout << "Result = " << setprecision(40) << consecutiveCosines(order, angle) << endl;

    return 0;
}
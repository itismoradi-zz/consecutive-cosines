#include "functions.hpp"
#include <cmath>
using namespace std;

double consecutiveCosines(unsigned int n, double x)
{
    if(n == 1)
    {
        return cos(x);
    }
    return cos(degreesToRadians(consecutiveCosines(n-1, x)));
}

double degreesToRadians(double d)
{
    return ((d * M_PI) / 180);
}
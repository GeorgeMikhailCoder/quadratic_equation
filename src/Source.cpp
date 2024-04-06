#include<iostream>
#include<cmath>
#include"header.h"

using namespace std;

EqResult solve_equation(double a, double b, double c, unsigned short eps_power)
{
    double eps = 1/pow(10,eps_power);
    double D = b*b - 4*a*c;
    
    EqResult res;
    res.tolerance = eps;

    if (abs(a) < eps) // case a == 0
    {
        res.success=false;
        return res;
    }


    if (abs(D)<eps) // case D == 0
    {
        res.nRoots=1;
        res.x1 = -b/2*a;
        res.x2 = 0;
    }
    
    if (D > eps) // case D > 0
    {
        res.nRoots=2;
        res.x1 = (-b + sqrt(D))/2*a;
        res.x2 = (-b - sqrt(D))/2*a;
    }

    if (D < -eps) // case D < 0
    {
        res.nRoots=0;
        res.x1 = 0;
        res.x2 = 0;
    }

    res.success = std::isfinite(res.x1) && std::isfinite(res.x2);
    return res;
}

#include<iostream>

using namespace std;

// Structure to keep answer for quadratic equation:
// success - flag, that became false, if errors occured
// nRoots - number of roots of equation
// x1, x2 - roots of equation. If equation has one or none solution, extra root keeps the default value.
// tolerance - small double value is used for comparing double values to zero
struct EqResult
{
    bool success = false;
    int nRoots = 0;
    double x1 = 0; 
    double x2 = 0; 
    double tolerance;

    friend ostream& operator <<(ostream& out, EqResult& R)
    {
        out << "Equation result:"<<endl;
        out << "Success: "<<R.success<<endl;
        out << "Number of roots: "<<R.nRoots<<endl;
        out << "Root 1: "<<R.x1<<endl;
        out << "Root 2: "<<R.x2<<endl;
        out << "Computing tolerance: "<<R.tolerance<<endl;
        return out;
    }
};


// Function to solve quadratic equation. 
// Accepts coefficients of equation 'ax^2 + bx + c' and epsilon power, that defines comparing double values to zero
// Returns structure 'EqResult' 
EqResult solve_equation(double a, double b, double c, unsigned short eps_power=5);
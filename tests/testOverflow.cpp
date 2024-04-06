// testOverflow.cpp includes tests, that check if 'success == false' for input data above double range.

#include"header.h"
#include<float.h>

constexpr double DM = DBL_MAX+1;

int main()
{
    double a = 1;
    double b = 2*DM;
    double c = DM;

    EqResult resEq = solve_equation(a,b,c);
    bool res = resEq.success;

    if(res)
    {
        cout<<"Solve equation for input: "<<endl;
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
        cout<<"returns"<<endl;
        cout<<resEq<<endl;
    }

    return res;
}
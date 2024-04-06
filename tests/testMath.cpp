// testMath.cpp includes tests, that check correct answer for all cases of discriminant, 
// and 'success == false' if a coefficient equals to zero.

#include"header.h"

bool testA0()
{
    EqResult res = solve_equation(0,4,5);
    return !res.success;
}

bool testDm()
{
    EqResult res = solve_equation(1,4,5);
    return res.success && (res.nRoots==0);
}

bool testD0()
{
    EqResult res = solve_equation(1,4,4);
    return res.success && res.nRoots==1 && 
            int(res.x1) == -2;
}

bool testDp()
{
    EqResult res = solve_equation(1,4,0);
    return res.success && res.nRoots==2 && 
            (int(res.x1) == 0 &&
            int(res.x2) == -4 ||
            int(res.x1) == -4 &&
            int(res.x2) == 0 
            );
}


int main()
{
    bool res = !testDm() || !testD0() || !testDp() || !testA0();
    if (res)
    {
        cout<<"test D < 0: "  <<testDm()<<endl;
        cout<<"test D == 0: " <<testD0()<<endl;
        cout<<"test D > 0: "  <<testDp()<<endl;
        cout<<"test a == 0: " <<testA0()<<endl;
    }
    return res;
}
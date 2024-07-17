#include<iostream>
using namespace std;

int AdditionI(int no1,int no2)
{
    int Ans = 0;
    Ans = no1+no2;
    return Ans;
}
int AdditionF(float no1,float no2)
{
    int Ans = 0.0;
    Ans = no1+no2;
    return Ans;
}
int AdditionD(double no1,double no2)
{
    int Ans = 0.0;
    Ans = no1+no2;
    return Ans;
}
int main()
{
    int iret = 0;
    float fret = 0.0f;
    double dret = 0.0;

    iret = AdditionI(10,11);
    fret = AdditionF(10.0f,11.0f);
    dret = AdditionD(11.0,10.0);

    cout<<iret<<"\n";
    cout<<fret<<"\n";
    cout<<dret<<"\n";

    return 0;
}
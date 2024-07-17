#include<iostream>
using namespace std;

template<class T>

T Addition(T no1, T no2)
{
    T Ans = 0;
    Ans = no1+no2;
    return Ans;
}
int main()
{
    int iret = 0;
    float fret = 0.0f;
    double dret = 0.0;

    iret = Addition(10,11);
    fret = Addition(10.0f,11.0f);
    dret = Addition(11.0,10.0);

    cout<<iret<<"\n";
    cout<<fret<<"\n";
    cout<<dret<<"\n";

    return 0;
}
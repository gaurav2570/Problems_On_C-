#include<iostream>
using namespace std;

float Calculate (float marks,float outof = 100)
{
    float percentage = ((marks/outof)*100);
    return percentage;
}
int main()
{
    float Ans = 0.0f;

    Ans = Calculate(86,100);
    cout<<"Percentage : "<<Ans<<"\n";

    Ans = Calculate(86);
    cout<<"Percentage : "<<Ans<<"\n";

    Ans = Calculate(320,400);
    cout<<"Percentage : "<<Ans<<"\n";
    
    return 0;
}
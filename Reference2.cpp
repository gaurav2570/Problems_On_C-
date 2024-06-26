#include<iostream>
using namespace std;

int main()
{
    int Arr[4] = {10,20,30,40};
    int (&Brr)[4] = Arr;

    cout<<""<<Arr[0];  //10
    cout<<"\n"<<(&Brr)[0];  //Arr Address
    cout<<"\n"<<&Brr[0];   //Arr Address   
    cout<<"\n"<<Brr[0];   //10

    return 0;

}
#include<iostream>
using namespace std;

int main()
{
    int no = 11;
    int &ref = no;
    int &x = ref;

    int *p = &no;
    int *(&q) = p;

    no++;

    cout<<""<<no;
    cout<<"\n"<<ref;

    cout<<"\n"<<&no;
    cout<<"\n"<<&ref;  // no ref variable

    cout<<"\n"<<x;
    cout<<"\n"<<&x;

    cout<<"\n"<<*p;
    cout<<"\n"<<*q;
}
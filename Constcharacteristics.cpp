#include<iostream>
using namespace std;

class Demo
{
    public :
        int i;
        const int j;
        const int k;
        Demo(int a,int b,int c) : j(b),k(c)
        {
            i = a;
        }

};
int main()
{
    Demo obj(11,21,51);
    cout<<"Value of i : "<<obj.i<<"\n";
    cout<<"Value of j : "<<obj.k<<"\n";
    cout<<"Value of k : "<<obj.j<<"\n";

    obj.i++;
    //obj.j++;
    //obj.k++;

    return 0;
}
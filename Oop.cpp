#include<iostream>
using namespace std;

class Demo
{
    public:
        int i; 
        int j;    //characteristic

        int fun()
        {
            cout<<"Inside fun of class \n";  //Behaviour

        }
};

int main()
{
    Demo obj1;
    Demo obj2;

    obj1.i = 11;
    obj1.i = 22;

    obj2.j = 12;
    obj2.j = 23;

    obj1.fun();
    obj2.fun();

    cout<<"value of obj1.i is : "<<obj1.i;
    cout<<"\nvalue of obj2.j is : "<<obj2.j;

    return 0;
}
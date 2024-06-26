#include<iostream>
using namespace std;
class Demo
{
    public:
        int i;
        int j;
        int k;
        int g;
        int v;
        int m;
        Demo (int a = 10,int b = 20,int c = 30)
        {
            cout<<"Value of this is : "<<this<<"\n";
            this->i = a;
            this->j = b;
            this->k = c;
            this->g = i;
            this->v = j;
            this->m = k;
        }
        void fun(int No1,int No2)
        {
            cout<<"Inside of Fun\n";
            cout<<"Value of i : "<<this->i<<"\n";
            cout<<"Value of j : "<<this->j<<"\n";
            cout<<"Value of k : "<<this->k<<"\n";
        }
        void Display()
        {
            cout<<"Inside Display\n";
            cout<<"Value of this pointer is : "<<this<<"\n";

        }
};
int main()
{   
    Demo obj1;
    Demo obj2(11,21,51);
    Demo obj3(55,55,55);

    obj1.fun(5,6);
    obj2.fun(8,9);
    obj3.fun(2,2);

    cout<<"Address of obj 1 is : "<<&obj1<<"\n";
    obj1.Display();

    cout<<"Address of obj 2 is : "<<&obj2<<"\n";
    obj2.Display();

    return 0;
}
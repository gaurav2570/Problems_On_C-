#include<iostream>
using namespace std;

class Demo
{
        int i;
    public:
        int j;
    private:
        int k;
    protected:
        int a;
    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
            a = 40;
        }
        void Diaplay()
        {
            cout<<"Value of i : "<<i<<"\n";
            cout<<"Value of j : "<<j<<"\n";
            cout<<"Value of k : "<<k<<"\n";
            cout<<"Value of a : "<<a<<"\n";
        }
};
class Hello : public Demo
{
    public:
        void HelloDiaplay()
        {
            //cout<<"Value of i : "<<i<<"\n";
            cout<<"Value of j : "<<j<<"\n";
            //cout<<"Value of k : "<<k<<"\n";
            cout<<"Value of a : "<<a<<"\n";
        }
};
int main ()
{
    Hello hobj;
    hobj.HelloDiaplay();

    return 0;
}
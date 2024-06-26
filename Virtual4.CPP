#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
        virtual void Fun() //1000
        { cout<<"Inside Base fun \n";}
        virtual void Gun() //2000
        { cout<<"Inside Base gun \n"; }
        void Sun() //3000
        { cout<<"Inside Base Sun \n"; }
        void Run() //4000
        { cout<<"Inside Base Run \n"; }
};
class Derived : public Base
{
    public:
        int a,b;
        virtual void Gun() //5000
        { cout<<"Inside derivide gun \n";  }
        void Run()  //6000
        { cout<<"Inside derivide Run \n";  }
        virtual void mun()  //7000
        { cout<<"Inside derivide mun \n";  }
};
int main()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    Base *bp = new Derived;
    bp ->Fun(); //Base Fun
    bp ->Gun(); //Der Gun
    bp ->Sun(); //Base Sun
    bp ->Run(); //Base Run
    //bp ->mun(); //Error

    return 0;
}
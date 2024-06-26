#include<iostream>
using namespace std;

class Demo
{   
    public :
        int x,y;
        Demo()
        {
            cout<<"Inside Demo Constructor \n";
            x = 10;
            y = 20;
        }
        ~ Demo()
        {
            cout<<"Inside Demo Destructor \n";
        }
        void fun()
        {
            cout<<"Inside Fun Demo \n";
        }
};
class Hello
{       
    public :
        int a,b;
            Hello()
            {
                cout<<"Inside Hello Constructor \n";
                a = 30;
                b = 40;
                }
            ~ Hello()
            {
                cout<<"Inside Hello Destructor \n";
            }
            void gun()
            {
                cout<<"Inside gun of Hello \n";
            }
};
class Marvellous : public Hello,public Demo
{
        public :
        int p;
        Marvellous()
        {
            cout<<"Inside Marvellous Constructor \n";
            p = 60;
        }
        ~ Marvellous()
        {
            cout<<"Inside Marvellous Destructor \n";
        }
        void sun()
        {
            cout<<"Inside sun of Marvellous \n";
        }
};
int main()
{
    Marvellous mobj;
    cout<<sizeof(mobj)<<"Bytes \n";
    
    mobj.fun();
    mobj.gun();
    mobj.sun();

    return 0;
}
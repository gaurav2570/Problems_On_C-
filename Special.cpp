#include<iostream>
using namespace std;

class Demo 
{
    public:
        int i;
        int j;
        Demo ()
        {
            cout<<"Inside Default Constructor \n";
            i = 0;
            j = 0;
        }
        Demo(int A, int B)
        {
            i = A;
            j = B;
            cout<<"Inside Parameterised Constructor \n";
        }
        Demo (Demo &ref)
        {
            i = ref.i;
            j = ref.j;
            cout<<"Inside Copy Constructor \n";
        }
        ~ Demo ()
        {
            cout<<"Inside Distructor \n";
        }
};
int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);

    return 0;
}
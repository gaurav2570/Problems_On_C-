#include<iostream>
using namespace std;

class Demo
{
    public :
        int i,j,k;
            Demo()
            {
                cout<<"Inside Constructor\n";
            }
            ~Demo()
            {
                cout<<"Inside Distructor\n";
            }
            void Display()
            {
                cout<<"Inside Display\n";
            }
};
int main()
{
    Demo *ptr = new Demo;

    ptr -> Display();

    delete ptr;

    return 0;
}
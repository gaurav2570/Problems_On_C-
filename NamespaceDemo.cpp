#include<iostream>
using namespace std;

namespace Gaurav
{
        Display()
        {
            cout<<"Inside Gaurav"<<"\n";
        }
}
namespace Dadu
{
        Display()
        {
            cout<<"Inside Dadu"<<"\n";
        }
}
int main()
{
    Gaurav :: Display();
    Dadu :: Display();

    return 0;
}
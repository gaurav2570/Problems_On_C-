#include<iostream>
using namespace std;
class Demo
{
    public :
        int Addition(int A, int B)
        {
            int Ans = 0;
            Ans = A+B;
            return Ans;
        }
        int Addition(int A, int B,int c)
        {
            int Ans = 0;
            Ans = A+B+c;
            return Ans;
        }
        float Addition(float A,float B)
        {
            int Ans = 0.0f;
            Ans = A+B;
            return Ans;
        }
};
int main()
{
    Demo obj;
    int i = 10, j = 20, k = 30;
    int ret = 0;
    float l = 90.0, m = 80.0;
    float fret = 0.0f;

    ret = obj.Addition(i,j);
    cout<<"Addition of first parameter is : "<<ret<<"\n";

    ret = obj.Addition(i,j,k);
    cout<<"Addition of second parameter is : "<<ret<<"\n";

    fret = obj.Addition(l,m);
    cout<<"Addition of third parameter is : "<<fret<<"\n";

    return 0;
}
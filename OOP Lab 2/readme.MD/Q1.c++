// 23k-0077
// Sajid Ali
#include <iostream>
using namespace std;
void recursiveSwap(int &a, int &b)
{
    if(a==b)
    {
        return;
    }
    else if(b=0)
    {
        return;4
        6
    }
    else
    {
        a=a+b;
        b=a-b;
        a=a-b;
        recursiveSwap(a,b);
    }
}
int main()
{
    int x,y;
    cout<<"Enter two numbers:\n";
    cin>>x>>y;
    cout<<"Before swaping, value of a= "<<x<<" and value of b= "<<y<<endl;
    recursiveSwap(x,y);
    cout<<"After swaping, value of a= "<<x<<" and value of b= "<<y<<endl;
    return 0;
}

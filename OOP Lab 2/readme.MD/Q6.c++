// 23k-0077
// Sajid ali
#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int lcm(int a, int b)
{
    if(a==0 || b==0)
    {
        return 0;
    }
    return (a*b)/gcd(a,b);
}
int main()
{
    int num1,num2;
    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;
    cout<<"GCD of "<<num1<<" and "<<num2<<" is: "<<gcd(num1,num2)<<endl;
    cout<<"LCM of "<<num1<<" and "<<num2<<" is: "<<lcm(num1,num2);
    return 0;
}

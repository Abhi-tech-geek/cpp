#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter  number";
    cin>>a;
    cout<<"enter 2nd number";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"swapping of your number is "<<a<<" "<< b <<endl;

return 0;
}
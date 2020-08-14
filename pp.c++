#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter 1st number=";
cin>>a;
cout<<"enter 2nd number=";
cin>>b;
int c,d;
if(a>b)
{
cout<<" your first number is greater";
 c=a;
}
 else
 {
     cout<<"your 2nd number is greater";
     d=b;
 }
if(c%2==0 && d%2==0)
   cout<<" and your number  is even ";
else 
    cout<<" and your number is odd";

return 0;
}
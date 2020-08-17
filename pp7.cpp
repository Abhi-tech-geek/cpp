#include<iostream>
using namespace std;
int main()
{
int i=0,n;
cout<<"enter a number";
cin>>n;
do
{
    i++;
    if(n%i==0)
    {
        cout<<i<<endl;
    }
}while(i<=n);
return 0;
}
#include<iostream>
using namespace std;
int main()
{
int i,n,fact=1;
cout<<"enter a number ";
cin>>n;
for (i=1;i<=n; i++)
{
    fact*=i;
}
    cout<<" fact of "<<n<<" is "<<fact;
return 0;
}

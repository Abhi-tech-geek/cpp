#include<iostream>
using namespace std;
int main()
{
int n,i;
cout<<"what table you want";
cin>>n;
for(i=1;i<=10;i++)
{
    cout<<n<<"x"<<i<<"="<<i*n<<endl;
}
return 0;
}
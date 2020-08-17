// sum of nature numbe
#include<iostream>
using namespace std;
int main()
{
	int n,i=1,sum=0;
	cout<<"enter the number";
	cin>>n;
	do
	{
	     sum=sum+i;
	     i++;
         //cout<<" sum of natural no is"<<sum<<endl;
	}while(i<n);
	cout<<"sum of natural no is"<<sum<<endl;
	return 0;
}


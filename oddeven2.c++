#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a numner for check Odd Or Even - ";
    cin>>a;
    if(a%2==0)
    {
        if (a>0)
        cout<<"You Enter positive even number";
        else 
        cout<<"You Enter negative even number";
    }
    else if(a%2!=0)
    {
        if(a>0)    
        cout<<"You enter positive odd number";
    else
        cout<<"You enter negative odd number";
    }

return 0;
}
//swapping with two numbers
// we have many option for this
#include<iostream>
using namespace std;
int main()
{
    int a=2,b=4;
    cout<<"before swap a= "<<a<<" b= "<<b<<endl; //endl use for new line
    //First method
    a=a*b; //a=8 (2*4)
    b=a/b; //b=2 (8/4)
    a=a/b; //a=4 (8/2)
    //2nd method 
     /*a=a+b;  
     b=a-b;  
     a=a-b; */  
    //3rd method
    //a=a+b-(b=a);  
    cout<<"after swap a= "<<a<<" b= "<<b<<endl;


return 0;
}
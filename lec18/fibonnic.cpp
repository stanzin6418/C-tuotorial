#include<iostream>
using namespace std;

int fib(int a )
{
    if (a<=2)      /// here the a =1,2 the value for that is 1 
    {
        return 1;
    }

    return fib(a-2)+fib(a-1);
}




int main()
{
     int c;

     cout <<"enter the vaule of the fib"<<endl;
     cin>>c;

     cout <<"the value of the fib is "<<fib(c)<<endl;
    
    return 0;
}
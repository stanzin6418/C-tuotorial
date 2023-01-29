#include<iostream>
using namespace std;

int factoral ( int n)
{
     if (n<=1)
     {
        return 1;

     }
     
    return n* factoral(n-1);
}
int main()
{
      int b;
     cout <<"enter the value of the factorai"<<endl;
     cin>>b;
     cout <<"the value  of the factorial is "<<factoral(b)<<endl;

    
    return 0;
}
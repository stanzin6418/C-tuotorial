#include<iostream>
using namespace std;

// this is call  by refrennce 
  void swap (int *x  ,int*y)
  {
  int temp;
    temp =*x;
    *x= *y;
    *y =temp;
  }
    // this is refrence calling 
  void swaprefrence (int &m ,int&n) 
  {
  int temp;
    temp = m;
    m=n;
   n=temp;
  }

 
int main()
{
    int a ,b ;
    a=4;
    b=6;

    swap(&a ,&b);
    swaprefrence( a, b);

    cout<<"the value of the a  after the swap is "<<a<<"the value of the b affter the swap is "<<b<<endl;
    cout<<"the value of the a  after the swaprfrence  is "<<a<<"the value of the b affter the swaprfrence  is "<<b<<endl;

    return 0;
}
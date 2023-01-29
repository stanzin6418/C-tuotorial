#include<iostream>
using namespace std;

int main()
{
    int x=9;
    int *p=&x;
    int **m =&p;
    int ***n=&m;

    cout<<"the adress of the x is" << p<<endl;
    cout<<"the value of x is "<<*p<<endl;
    cout<<"the adreass of the p is "<<m<<endl;
    cout<<"the adress of the x is "<<*m<<endl;
    cout<<"the adresss of the m is "<<n<<endl;
    cout<<"the adress ofthe p  is "<<*n<<endl;
     
  
     *p=10;    //*p is the same as x 
      cout <<"the value of the x is "<<x<<endl ;
      **m=16;     // **m is the same as the value of the x 
      cout<<"the new value pf the x is "<<x<<endl;

      ***n=**m +89;   /// ***n is the sam eas the value of the x a s**m and *p 
      cout<<"the new value pf the x is "<<x<<endl;

    return 0;
}
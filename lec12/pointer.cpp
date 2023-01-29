#include<iostream>
using namespace std;

int main()
{
    int d=3;
    int*ptr=&d;
    cout<<*ptr<<endl;      // his is the value of the varible   
    cout<<ptr<<endl;      // this is the adress of the vaRIBLE  d 
    cout<<&d<<endl;      //this is adresss of nt varible d 
    cout<<&ptr<<endl;    // this is adress of ppointer itself

        cout<<ptr+2<<endl;  //f
        cout<<*(ptr+2)<<endl;    // herer another garbage value is given bby  computer 
        

    return 0;
}
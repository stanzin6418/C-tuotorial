#include<iostream>
using namespace std;

class constructor 
{
    int a ;
    int b ;

     public :

     void printf (void );

     constructor(void );   // constructor declaration

};

  // constructor defination here 
constructor :: constructor (void )
{
    a =0;
    b=0;
    // cout <<"the cmplex number is "<<a <<"+"<<b<< "i"<<endl;     // it will not return any value 

}

void constructor :: printf (void )
{
    cout <<"the cmplex number is "<<a <<"+"<<b<< "i"<<endl;

}

int main()
{
     constructor c;


 // here value of the a  and b are already set because of the constructor 
     c.printf();


    // cout <<c <<endl;         // error here is that cnstuctor do not return value or doesnt have return datatype 
    return 0;
}
#include<iostream>
using namespace std;
class constructor 
{
    int a ;
    int b ;

     public :

     void printf (void );

     constructor(int ,int  );   // constructor taking argument 

};

  // constructor defination here 
constructor :: constructor (int x , int y  )       // passing argument to the constuctor 
{
    a =x;
    b=y;
    

}

void constructor :: printf (void )
{
    cout <<"the cmplex number is "<<a <<"+"<<b<< "i"<<endl;

}

int main()
{

    // implicit call 
     constructor c(3,4);
      c.printf();


    // explicit call

    constructor b =constructor(7,8); 
     b.printf();
     
    return 0;
};
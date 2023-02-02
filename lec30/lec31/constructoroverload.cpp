#include<iostream>
using namespace std;
class constructor 
{
    int a ;
    int b ;

     public :

     void printf (void );

     constructor(int ,int  );   // constructor taking argument 
     constructor(int );
     constructor (void );

};
 
 constructor :: constructor (int x , int y  )       // 1st constructor 
{
    a =x;
    b=y;
    

}

 constructor :: constructor (int x   )       // 2nd constructor 
{
    a =x;
    b=0;
    

}


 constructor :: constructor (void )       // 3rd constructor
{
    a =0;
    b=0;
    

}

void constructor :: printf (void )
{
    cout <<"the cmplex number is "<<a <<"+"<<b<< "i"<<endl;

}

int main()
{

     constructor c(3,4);
      c.printf();


      constructor b(2);
      b.printf();

      constructor d;
      d.printf();


     
    return 0;
};
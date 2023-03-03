#include<iostream>
using namespace std;
class constructor 
{
    int a ;
    int b ;

     public :

     void printf (void );

     constructor(int ,int  );   // constructor taking argument 
     constructor(int );           // single para,yer 
     constructor (void );       // default paramter 

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

     constructor c(3,4);     // it will call the parameter  constructor 
      c.printf();


      constructor b(2);     // it will call the  single parameter construcot 
      b.printf();

      constructor d;            // it will call the default parametre 
      d.printf();


     
    return 0;
};
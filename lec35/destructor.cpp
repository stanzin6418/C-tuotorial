#include<iostream>
using namespace std;

class numb 
{

    int count ;
public:

   numb ()
   {
     count ++;

     cout <<"you call the constructor "<<endl;


   }

   ~numb ()
   {
    count--;
    cout <<"you called the destructor "<<endl;

   }
};

int main()
{

    cout <<"you enter the main function "<<endl;
    numb n1 ;                                              // consstructor called fo the num1
    {
        cout <<"you enter the block "<<endl;
        cout <<"decalring two object n2,n3"<<endl;
        numb n2,n3;                                             // constructor call for the two number 
        cout <<"exiting the block "<<endl;

    }

    cout <<"back to main function"<<endl;
     

     // destructor called 
    
    return 0;
}
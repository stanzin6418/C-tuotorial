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
    numb n1 ;
    {
        cout <<"you enter the block "<<endl;
        cout <<"decalring two object n2,n3"<<endl;
        numb n2,n3;
        cout <<"exiting the block "<<endl;

    }

    cout <<"back to main function"<<endl;

    
    return 0;
}
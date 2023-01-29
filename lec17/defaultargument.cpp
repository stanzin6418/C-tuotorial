#include<iostream>
using namespace std;

float returnvalue( int c, float factor = 1.1)            //here the factor is default argumrnt 
{
   return c*factor;
}

int main()
{
    int money=100000;

    returnvalue(money);     // here even is we not pass second val ue  
  
    cout<<"if you have "<<money<<"you will receive the total amount after the factor "<<returnvalue(money)<<endl;
    return 0;
}
#include<iostream>
using namespace std;

void print ( char H[]){

    while (*H!='\0')
    {
       cout<<*H;
       H++;
    }

    cout<<endl;
    
}

int main()
{
    char C []="hello  this is my code ";
     
     print( C);

   
    return 0;
}
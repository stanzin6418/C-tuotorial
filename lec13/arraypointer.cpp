#include<iostream>
using namespace std;

int main()
{
    int  A[]={2,3,4,5,6};

    int *P= A;
   // printitng the va;ue by using pointer 
    cout<<"the value of the element  is "<<*P<<endl;
    cout<<"the value of the element  is "<<*(P+1)<<endl;
    cout<<"the value of the element  is "<<*(P+2)<<endl;
    cout<<"the value of the element  is "<<*(P+3)<<endl;
    cout<<"the value of the element  is "<<*(P+4)<<endl;
    cout<<"the value of the element  is "<<*(P+5)<<endl;

    // aslos  we can print the value by using the name of the array 

     cout<<"the value of the element  is "<<*A<<endl;
    cout<<"the value of the element  is "<<*(A+1)<<endl;
    cout<<"the value of the element  is "<<*(A+2)<<endl;
    cout<<"the value of the element  is "<<*(A+3)<<endl;
    cout<<"the value of the element  is "<<*(A+4)<<endl;
    cout<<"the value of the element  is "<<*(A+5)<<endl;
     

     // we can see that P  is same as A  or name o the pointer issame as the name of the array 

   
    return 0;
}
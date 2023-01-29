#include<iostream>
using namespace std;

int main()
{
    // for (int i = 0; i < 14; i++)
    // {
    // //    cout<<i<<endl;   // this will print the 4 also because the if statement is after the cout 
    //    if (i==4)
    //    {
    //    break;
    //    }
    //    cout<<i<<endl;   // here 4 will nnot print because the cout is after the if 
       
    // }






      for (int i = 0; i < 14; i++)
    {
    //    cout<<i<<endl;   // this will print the 4 also because the if statement is after the cout 
       if (i==4)
       {
       continue ;     // continue will skip this particular itiration
       }
       cout<<i<<endl;   // here 4 will nnot print because the cout is after the if 
       
    }
   int i =8;
     do
     {
      cout<<"the value of i is "<<i;
     } while (i==8);
     
     

    return 0;
} 
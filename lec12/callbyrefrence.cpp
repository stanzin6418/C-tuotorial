#include<iostream>
using namespace std;

// void increment (int *m ){    // these is function defining not a function prototype 

//     *m=*m+1;

//     cout<<"the value of the a in increment function is "<<*m<<endl;
// }
  void increment (int * );   // this is funtion prototype
int main()
{
    int a =9;
    increment(&a);         // here a is actual parameter 
    cout <<"the value of the a in the main function is "<<a<<endl;
    return 0;
}

void increment (int *m ){    // these is function defining not a function prototype 
                                  //here m is formal parameter 
    *m=*m+1;

    cout<<"the value of the a in increment function is "<<*m<<endl;
}
       
            
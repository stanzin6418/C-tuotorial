#include<iostream>
using namespace std;
void print(char C[])  // &C[0]    // array can be passed only as pointer to function argument 
{
    while (*C!='\0')    // here *C means value at the C [0] that is 'h'  
                           //here *C means *{C[0]} so C++ maens *{C[1]};
    {
        cout<<*C;     // here c is act as an pointer so increment the pointer will too increased the value 
        C++;
    }

    cout<<endl;
    

}

int main()
{

    char C[9]="hello";
    print(C);
    
    return 0;
}
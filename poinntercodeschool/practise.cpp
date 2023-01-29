#include<iostream>
using namespace std;

void update (int *a){

    *a =*a +6;
}

int main()
{
    int a =5;
    update(&a);
    cout<<a<<endl;
    
    return 0;
}
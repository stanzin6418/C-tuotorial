#include<iostream>
using namespace std;
  int a =10;
int main()
{
    int a =9;
    cout<<" a is "<<::a;  // here i have used typecasting to take the value of global value not the local value
 return 0;
}
boi
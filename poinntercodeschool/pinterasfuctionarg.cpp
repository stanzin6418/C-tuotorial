#include <iostream>
using namespace std;

//       // this is call by value to the function
// int sum (int a , int b)
// {
//     int c =a+b;
//     return c;

// }

//      // this  is call by refernce
//    int sum (int* a , int *b)
// b// {
//     int c =*a+*b;
//     return c

// }

// pointer as fuction return

int *sum(int *a, int *b)
{
    int *c =  (int * )malloc( 3*sizeof(int ));     // the solution to the pounter return is using the malloac and allocated some space in the heap and access the adress 
     *c= *a+ *b;
    return c;
}

int main()
{
    int a = 5, b = 6;
    // int *x = sum(&a, &b);
    
    cout << "the valule  of the  a and b is " << *sum(&a, &b) << endl;
    return 0;
}
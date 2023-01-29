#include<iostream>
using namespace std;

int main()
{
    int array[5]={1,2,3,4,5};
    int*p=&array[0];
    cout<<"the adress of the first array is "<<p<<endl;
    cout<<"the valur of the first array is "<<*(p)<<endl;

    cout<<"the adress of the first array is "<<p+1<<endl;
    cout<<"the valur of the first array is "<<*(p+1)<<endl;

   cout<<"the adress of the second  array is "<<p+2<<endl;
    cout<<"the valur of the second  array is "<<*(p+2)<<endl;

    cout<<"the adress of the thirrd  array is "<<p+3<<endl;
    cout<<"the valur of thee thirrd array is "<<*(p+3)<<endl;

    cout<<"the adress of the forth  array is "<<p+4<<endl;
    cout<<"the valur of thee forth array is "<<*(p+4)<<endl;


    cout<<"the adresss o the first element is "<<array<<endl;    // here the array name just corrospond tp the adress of the first element os the array
    cout <<"the adress of the first elemnet is "<<&array[0]<<endl;

    cout<<"the value of the first element is "<<array[0]<<endl;
    cout <<"the value of the firsst element is "<<*array<<endl;

    cout<<"the value of the second  element is "<<array+1<<endl;
    cout<<"the value of the second  element is "<<&array[1]<<endl;
    cout <<"the value of the  second  element is "<<*(array+1)<<endl;
    cout <<"the value of the  second  element is "<<array[1]<<endl;


    return 0;
}
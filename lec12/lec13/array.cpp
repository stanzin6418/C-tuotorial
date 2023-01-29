#include<iostream>
using namespace std;

int main()
{
    int array[]={23,38,45,89};
    cout<<"this is the value of array "<< array[0]<<endl;
    cout<<"this is the value of array "<< array[1]<<endl;
    cout<<"this is the value of array "<< array[2]<<endl;
    cout<<"this is the value of array "<< array[3]<<endl;

    // other way of declaring the array is 

    int marks [6];
    marks [0]=34;
    marks [1]=34;
    marks [2]=34;
    marks [3]=34;

    for (int i = 0; i < 4; i++)
    {
       cout<<"this is the value of the marks "<< marks[i]<<endl;
    }
    
    return 0;
}
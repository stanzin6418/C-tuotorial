#include<iostream>
using namespace std;

int main()
{
    int p=6;
    int*u=&p;
    cout<<"the adress is before  "<<u<<endl;
    cout<<"the value  is  brfore "<<*u<<endl;
    cout<<"the adress after increment  "<<u+1<<endl;
    cout<<"the value after increment  "<<*(u+1)<<endl;

    char*po;
    po=(char*)&u;   // this is typecasting 

    cout<<"the adress of the po is "<<po<<endl;
    cout<<"the value of the po is "<<*po<<endl;
    
    
  
    // cout <<"the vlaue of the increment pointer is "<<u++<<endl;
    // cout <<"the vlaue of the increment pointer is "<<*(u+1)<<endl;
    return 0;
}
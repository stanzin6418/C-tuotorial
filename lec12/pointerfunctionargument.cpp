

// THIS IS CALLED CALLL  BY VALUE 

#include<iostream>
using namespace std;

void incrememnt (int m){

    m =m+1;
    cout<<"the vlaue of the m in the increment section is "<<m<<endl;

    cout <<"the adresss of the m in increment is "<<&m<<endl;

}

int main()
{
    int a =6;

    incrememnt(a);
    cout<<"the value od the a in the calling function  is "<<a<<endl;
    cout<<"the adresss of the a in main function is "<<&a<<endl;
    
    return 0;
}
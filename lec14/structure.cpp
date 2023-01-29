#include<iostream>
using namespace std;

// struct customer   // customer is the name of the structure
// {
//     int age ;     // this sar the entity of the different datatype 
//     char name ;
//     float salary;

// };

typedef struct customer   // typedef used for the shortcut of the structure name 
{
    int age ;     // this sar the entity of the different datatype 
    char name ;
    float salary;

} lol;   // this is the shortform of the structure 

int main()
{

    lol stanzin;    // stanzin is the name of which structure id making 
        stanzin.age=24;
        stanzin.name='c';
        stanzin.salary=50000;


        cout<<stanzin.age<<endl;
        cout<<stanzin.name<<endl;
        cout<<stanzin.salary<<endl;

    
    
    return 0;
}
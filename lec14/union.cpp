#include<iostream>
using namespace std;

union money {
    int girl;
    char letter;
    float food;

};

int main()
{
    union money m1;

    m1.food=6.8;
    // m1.girl=6;
    // m1.letter='v';

    cout<<m1.food<<endl;
    cout<<m1.girl<<endl;
    cout<<m1.letter<<endl;


    return 0;
}
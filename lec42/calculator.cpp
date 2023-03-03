#include <iostream>
#include <math.h>
using namespace std;

class simplecalulator
{
    int a;
    int b;

public:
    void setnumber(void);
    float add(void);
    float subtracted(void);
    float multiply(void);
};

void simplecalulator ::setnumber(void)
{
    {
        cout << "enter the firsst number " << endl;
        cin >> a;
        cout << "enter the second number " << endl;
        cin >> b;
    }
}

float simplecalulator ::add(void )
{
    int a ;
    int b ;

    return a + b;
}

float simplecalulator ::subtracted(void)
{
      int a ;
    int b ;
    return a - b;
}

float simplecalulator ::multiply(void)
{
      int a ;
    int b ;
    return a * b;
}



int main()
{ 


    simplecalulator  j;
    j.setnumber();
   j.add ();



    return 0;
}
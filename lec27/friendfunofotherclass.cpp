#include <iostream>
using namespace std;
 

 // forward decalaration 
 class complex;           // assurity tha thr class name  complex a=exist i future and i can used  it 

class calculator
{
public:
    int sumrealadd(complex  , complex  );

    int sumcompadd(complex ,complex );
   
};

class complex
{
    int a, b;

public:


    // declaring each function sepeartely friend to the class 
    friend int calculator ::sumrealadd(complex c1, complex c2);
    // friend int  calculator :: sumcompadd (complex c1 ,complex c2 );            // even if  i comment out this function it s will still work because entire class is friend  below 



    // alter solution 
     // making entire class friend to the class 
     friend class calculator ;


    void setdata(int, int);

    // void diaplaydat(void);
};

void complex :: setdata (int x , int y )
{
    a =x;
    b=y;
}

int  calculator ::sumrealadd(complex c1, complex c2)
    {
        return (c1.a + c2.a);
        return (c1.b + c2.b);
    };

    int  calculator ::sumcompadd(complex c1, complex c2)
    {
       
        return (c1.b + c2.b);
    };



int main()
{

    complex c1, c2;

    c1.setdata(2, 3);
    // c1.diaplaydat();

    c2.setdata(3, 4);
    // c2.diaplaydat();

    calculator m;

     int sum = m.sumrealadd(c1, c2);
    cout << sum << endl;

    int sumc = m.sumcompadd(c1, c2);
    cout << sumc <<"i"<< endl;

    return 0;
}
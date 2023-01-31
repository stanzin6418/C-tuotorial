#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(void );

    void sum_data(complex , complex );             // passing object as function argument to class function

    void display(void);
};

void complex ::setdata(void )
{
   cout<<"enter the a "<<endl;
   cin>> a;

   cout <<"enter the b "<<endl;
   cin>>b;

}
void complex ::sum_data(complex v1, complex v2)
{
    a = v1.a + v2.a;
    b = v1.b + v2.b;
}

void complex ::display(void)
{
    cout << "thecomplex number is " << a <<"+" << b << "i" << endl;
}
int main()
{

    complex v1, v2, v3;         // object of the class 

    
    v1.setdata();
    v1.display();

    v2.setdata();
    v2.display();

    v3.sum_data(v1,v2);
    v3.display();

    return 0;
}
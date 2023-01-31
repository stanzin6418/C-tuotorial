#include<iostream>
using namespace std;

class complex 
{
    int a,b;

    public:

    friend complex nonfriend(complex ,complex);

    void setdata (int  ,int );
    void diaplaydat(void );


};

void complex :: setdata(int x,int y)
{
    a=x;
    b=y;
}

void complex ::diaplaydat(void )
{
    cout <<"the complex number is "<<a<<"+"<<b<<"i"<<endl;

}

complex nonfriend(complex  p ,complex q )
{
    complex m ;
    m.setdata((p.a + q.a),(p.b + q.b));

    return m;
}

int main()
{

    complex c1 ,c2 ,sum;

    c1.setdata(2,3);
    c1.diaplaydat();

    c2.setdata(3,4);
    c2.diaplaydat();

    sum =nonfriend(c1,c2);
    sum.diaplaydat();
    
    return 0;
}
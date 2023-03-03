#include<iostream>
using namespace std;

class complex 
{
    int a,b;

    public:

    friend complex nonfriend(complex ,complex);           // this friend command allows the nonfunction to access the private member of the class 
                                                            // cannot become the member function os the class and not be abke to access the object of the class in main function 
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

complex nonfriend(complex  p ,complex q )                // this is some other function trying to fetch the value of the class 
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


    // nonfriend.setdata(4,5);              // this is wrong because this function is not the member function of the classs 
    
    return 0;
}
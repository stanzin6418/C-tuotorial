#include<iostream>
using namespace std;


class base 
{
    int data1;

    public:

    int data2;
    void setdata(void );
    int getdata1 (void );
    int getdata2 (void );

};

void base:: setdata(void )
{

        data1=10;
        data2 =20;
    
}

int base ::getdata1 (void )
{
   return data1;

}

int base ::getdata2 (void )
{
   return data2;

}


class derive : public base 
{
     int data3;
    
    public:

    void process (void );
    void   display (void );
};

void derive :: process(void )
{ 
    data3= data2*getdata1();
}

void   derive ::display (void )
{
    cout <<getdata1()<<endl;
    cout <<data2<<endl;
    cout <<data3<<endl;

}

int main()
{

    derive p;
    p.setdata();
    p.process();
    p.display();
  base u ;
  u.setdata();
  u.getdata1();
  u.getdata2();

    


    
    return 0;
}
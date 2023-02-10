#include<iostream>
using namespace std;

class base 
{
    protected:
    int a ;
    private:
    int b ;

    public:

    void setdata (int x ,int y)
    {
        a=x;
        b=y;
    }
    int  getdata1(void )
    {
        return a;
    }

     int  getdata2(void )
    {
        return b;
    }
};


class derived : public   base 
{
    public:

    void process (void )
    {
        void   setdata (int x,int y);
        int getdata1();
        
        int getdata2();



    }

    void display()
    {
        cout <<getdata1()<<endl;
        cout <<getdata2()<<endl;

    }
};

int main()
{

    base c ;
    c.setdata(4,5);
    derived d;
    d.process();
    d.display();
   
    
    return 0;
}
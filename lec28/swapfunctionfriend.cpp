#include<iostream>
using namespace std;

 class second ;
class first 
{
    int a ;

    public :
    void setdata(int x )
    {
        a=x;

    }

    void displaydata(void)
    {
        cout <<"the value of the  a is "<<a<<endl;

    }
     friend void swap (first &f , second &h );
};

class second 
{
    int b;

    public :

    void setdata (int y)
    {
        b=y;

    }

    void displaydata(void)
    {
        cout <<"the value of the  b is "<<b<<endl;

    }

     friend void swap (first &f , second &h);
};

 void swap (first &f , second &h )
 {
    int tem =f.a;
     f.a = h.b;

   h.b = tem;
 }

int main()
{

     first p;
     p.setdata(7);
     p.displaydata();


     second q;
     q.setdata(5);
     q.displaydata();

     swap (p ,q );
     
      p.displaydata();
       q.displaydata();
     

    
    return 0;
}
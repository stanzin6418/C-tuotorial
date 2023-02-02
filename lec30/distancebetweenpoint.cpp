#include<iostream>
using namespace std;
#include <cmath>


class point 
{
    int a ;
    int b;

    public:

    point (int x , int y )
    {
       a = x;
       b =y;

    }

    void display(void )
    {
        cout << "the point  is ("<<a<<","<<b<<")"<<endl;
    }
    friend double   distance (point ,point );
     
};

double   distance(point y , point z)
     {
        double o = sqrt(((z.a-y.a)*(z.a-y.a))+((z.b -y.b)*(z.b-y.b)));
        return o;
     };

int main()
{
    point v(2,2);
    v.display();

    point n(8,10) ;
    n.display();

    double  a = distance(v,n);

    cout <<"the sistance between v and n is "<<a<<endl;

    
    return 0;
}
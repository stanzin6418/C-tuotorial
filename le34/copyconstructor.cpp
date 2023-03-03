#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {

        a = 0;
    }
    number(int v)
    {
        a = v;
    }

    number (number &j)                   //this is the syntac of thr copy constructor 
    {

        cout <<"copy constructor is called "<<endl;
        a= j.a;

    }

    void display(void)
    {
        cout << "the value of the number is " << a << endl;
    }
};

int main()
{
    number a, v, b(6),p;

    b.display();
    a.display();
    v.display();

  number m (b);
  m.display();

  p=b;      // copy constructor will not invoke 

  number o=b;      // for new object it will invoke 





    return 0;
}
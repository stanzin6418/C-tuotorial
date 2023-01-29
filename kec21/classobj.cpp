#include <iostream>
using namespace std;

class animals
{
public:
    int a, b, c;
    void setdata(int x, int y, int z);           // function declration is madde into the public class not in the private class
    void getdata();

private:
    int d, e;
};

void animals ::setdata(int x, int y, int z)          // class refrence to the function
{
    a = x;
    d = y;
    e = z;              // private can only accesss by the function 


}

void animals::getdata()
{
    cout << "the value of the a is " << a << endl;
    cout << "the value of the b is " << b << endl;
    cout << "the value of the c is " << c << endl;
    cout << "the value of the d is " << d << endl;
    cout << "the value of the e is " << e << endl;
}

int main()
{

    animals cats;
    cats.setdata(3, 4, 5);
 cats.b=89;
 cats.c=8;      // public can accsees by the using . function here 

    

    cats.getdata();

    return 0;
}
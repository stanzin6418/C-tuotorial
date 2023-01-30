#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int x, int y);

    void sum_data(complex v1, complex v2);

    void display(void);
};

void complex ::setdata(int x, int y)
{
    a = x;
    b = y;
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

    complex v1, v2, v3;
    v1.setdata(2,3);
    v1.display();

    v2.setdata(4,5);
    v2.display();

    v3.sum_data(v1,v2);
    v3.display();

    return 0;
}
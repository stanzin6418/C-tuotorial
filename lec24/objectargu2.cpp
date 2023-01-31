#include <iostream>
using namespace std;
class weight
{
    int kilogram;
    int gram;

public:
    void getdata(void);

    void mergedata( weight ,  weight );

    void display(void);
};

void weight ::getdata(void)
{
    cout << "enter the kilogram " << endl ;
    cin >> kilogram;

    cout << "enter the gram " << endl;
    cin >> gram;

    // kilogram=a;
    // gram=b;
}

void weight ::mergedata(weight x,  weight y)
{
    gram = x.kilogram + y.kilogram;

    kilogram= gram/1000;
    gram =gram%1000;

    kilogram += x.kilogram + y.kilogram;
}

void weight ::display(void)
{
    cout << "the weight is " << kilogram << "kg" << gram << "gram" << endl;
}

int main()
{

    weight a, b, c;
    a.getdata();
    a.display();

    b.getdata();
    b.display();

    c.getdata(a, b);
    c.display();

    return 0;
}
#include <iostream>
using namespace std;

class bankdeposit
{
    int principle;
    int rate;
    int year;
    int returnvalue;

public:
    bankdeposit(){};
    bankdeposit(int p, int y, int r) // order matter here the first argument will stored as p and so on
    {
        principle = p;
        rate = float(r) / 100; // typecast here
        year = y;

        returnvalue = principle;

        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 + r);
        }
    };

    bankdeposit(int m, int n, double x) // order matter here the first argument will stored as p and so on
    {
        principle = m;
        rate = x; // typecast here
        year = n;

        returnvalue = principle;

        for (int i = 0; i < n; i++)
        {
            returnvalue = returnvalue * (1 + x);
        }
    };

    void display(void)
    {
        cout << "the principle amount was " << principle << "and the return value after " << year << "year"
             << "is " << returnvalue << endl;
    }
};

int main()
{

    int p, y, r;

    cout << "enter the value of the p ,y,r " << endl;

    cin >> p;
    cin >> y;
    cin >> r;

    bankdeposit u(p, y, r);
    u.display();


    int m,n,x;
    

    cout << "enter the value of the u,o,x " << endl;
    cin >> m;
    cin >> n;
    cin >> x;

    bankdeposit l(m, n, x);
    l.display();

    return 0;
}
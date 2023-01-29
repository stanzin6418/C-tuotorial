#include <iostream>
using namespace std;

int main()
{
    int a;
    int *p;
    p = new (int);

    int var[78] = {1, 2, 4};
    int *u;
    u = new int[59];
    u = var;

    cout << *(u + 1) << endl;
    //
    //   *p=45;
    //   *p=78;

    cout << p << endl;  // this is the adrerss of the dynamic memeory
    cout << *p << endl; // this will give mw the some garbage value becausse we ha vent alloted the value in the dynamic memory
    return 0;
}
#include <iostream>
using namespace std;

class employee
{
    float salary;
    int id;

public:
    employee() {}

    employee(int v)
    {
        id = v;
        salary = 34.7;
    }

    void display (void )
    {
        cout <<"the id of the employee is"<<id <<endl;
    }
};

class programmer :   employee
{
    int language;

public:

 programmer (int m)
 {
    id =m;
     cout << "the derived class is called  "<<endl;
 }

 void display (void )
    {
        cout <<"the id of the  derived class  is"<<id <<endl;
    }
    

    // void language(int n)
    // {
    //     language = n;
    // }
};

int
main()
{

    employee e1(7),e2();
    e1.display();

    programmer p1(3);
    p1.display();


    return 0;
}
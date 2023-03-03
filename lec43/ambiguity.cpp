#include<iostream>
using namespace std;

class base1
{
    public:
    void greet ()
    {
        cout <<"how are you "<<endl;
    }
};

class  base2 
{

    public:
    void greet ()
    {
    cout <<"kaise ho bhaiya "<<endl;
    }
};

class derived  : public  base1  , public base2
{
    public :

    void greet ()
    {
        base1::greet();            // this will take the greet  function of the base1 ckass ;
        

    }

};


int main()
{

    base1 obj1;
    obj1.greet();

    base2 obj2;
    obj2.greet();

    derived obj3;
    obj3.greet();



    
    return 0;
}
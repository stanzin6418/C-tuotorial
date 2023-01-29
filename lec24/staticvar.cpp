#include<iostream>
#include <string>
using namespace std;

class employee {
    int empid;
    string  name ;
     static int count;


    public:
    void setcount (void ){ count =0;}
     void getdata(void);
     void displayn (void);

};

void employee :: getdata (void)
{
    cout<<"enter the emplyee id "<<endl;
    cin>>empid;
    cout <<"enter the name od the employee"<<endl;
    cin>>name;
    count ++;
}

void employee :: displayn(void)
{
    cout<<"the employee id is  "<< empid<<"  and the name of the emp is    "<<   name <<"   and the count is    "<<  count<<endl;

}

int employee :: count =10;


int main()
{
     employee stanzin  , choldan , rigzin;

     stanzin.getdata();
     stanzin.displayn();

     cout <<endl;


     stanzin.getdata();
     stanzin.displayn();

     cout <<endl;

     stanzin.getdata();
     stanzin.displayn();

    
    return 0;
}
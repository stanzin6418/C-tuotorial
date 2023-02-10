#include<iostream>
using namespace std;

class student 
{
    protected:

    int roll_no_student1 ;
    // int roll_no_student2;

    public:


    void set_rollno (int m   )

    {
      roll_no_student1=m;
      
    }

    void get_rollno(void )
    {
        cout <<"the roll  no of the student 1  is "<<roll_no_student1<<endl;

    }
};


 class exam :public student 
 {
    protected:
    float physics ;
    float math ;


    public:
    void set_marks(float m , float n )
    {
        physics = m ;
        math = n;

    }

    void get_marks (void )
    {
        cout <<"the marks in the physics is "<<physics<<"and the marks in the math is "<<math <<endl;

    }


 };

 class result : public exam 
 {
    float percentage ;

    public :

    void display (void )

    {
        get_rollno();
        get_marks();
        cout <<"the percentage of yor marks is "<<(math +physics)/2<<"%"<<endl;

    }
 };

int main()
{


    // when inherited we only have to call the inherited object no thebase object and used  it to set values 
       result stanzin;
       stanzin.set_rollno(64);
       stanzin.set_marks(97.8,90.0);

       stanzin.display();
    
    return 0;
}
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_rollno(int a)
    {
        roll_no = a;
    }
    void print_rollno(void)
    {
        cout << "your roll no is " << roll_no << endl;
    }
};

class Test : public virtual Student
{
protected:
    float physics_marks;
    float math_marks;

public:
    void setmarks(float m, float n)
    {

        physics_marks = m;
        math_marks = n;
    }

    void print_marks(void)
    {

        cout << "you got " << physics_marks << "  in the physics "
             << "and " << math_marks << " in the math paper " << endl;
    }
};

class Sport : virtual public Student{

    protected:
    float score ;

    public :

    void setscore(float  h ){
        score =h;
    }

    void printscore (void ){

        cout <<"you score "<<score<<" in your physical practical "<<endl; 
    }
};


class Result : public Test , public Sport{
  protected:
  float total;

  public :
 
  void display(void ){
    total = score + physics_marks+ math_marks;

     print_rollno();
     print_marks();
     printscore();
    cout <<"your total score is "<<total<<endl;
  }
};

int main()
{
     Result stanzin;
     stanzin.set_rollno(14);
     stanzin.setmarks(89.0 , 87.4);
     stanzin.setscore(78.6);
     stanzin.display();

    return 0;
}
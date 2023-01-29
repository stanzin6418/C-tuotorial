#include <iostream>
#include <string>
using namespace std;

class binary
{
     private:
    void chk_bin(void);     // when function is declare inside he private class then it cannot be accseed by the object only funvtion acn accseed it 
    string s;            // by defaault member of a class are private not the public 

public:
    void getbinary(void);
    // void chk_bin(void);
    // void display(void);
    void onecom(void);
};

void binary::getbinary(void)
{
    cout << "enter the binary number " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    // cout << "the binary number is " << endl;

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "you enter  the worng binary number " << endl;
            exit(0);
        }

       
    }
          cout <<"you enter the right number "<<endl;

            cout <<"the binary number is "<<s<<endl;
        
}

 void  binary :: onecom(void)
 {
 chk_bin();
    
    for (int  i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='1')
        {
            s.at(i)='0';
        }

        else
        {
            s.at(i)='1';

        }

        
    }
    
        cout<<"the ones compliment is "<<s<<endl;
 }


// void binary :: display(void);
// {
//     cout << "the number which  you have ennter is " << endl;

//     for (int i = 0; i < s.length(); i++)
//     {
//         cout << s.at(i);
//     }

//     cout << endl;
// }

int main()
{

    binary b;

    b.getbinary();
    b.chk_bin();            // here abstraction is used because the checking binaryis done by compiler and itis not visible to publc 
    b.onecom();

    // b.display();

    return 0;
}




/// class private member are only accessed by tthe mehtod of the class not in the main fnctionn
#include <iostream>
using namespace std;

class shop
{
    int productid[100];
    int productprize[100];
    int counter;

public:
    void initsupply(void) { counter = 0; };
    void getprize(void);
    void displayprize(void);
};

// here product are stored in database with their price

void shop ::getprize(void)
{

    cout << "enter the product id with counter  " << counter + 1 << endl;
    cin >> productid[counter];

    cout << "enter the product prize of counter id  " << counter + 1 << endl;
    cin >> productprize[counter];

    counter++;            // the counter is used to store the product without loosing previous one 
}
 

 // as much as counter there was i  wiill display eacch one of them  here 
void shop ::displayprize(void)
{
    for (int i = 1; i < counter; i++)
    {
        cout << "the prise for the product id " << productid[i] << "and the counter "
             << counter<< "is" << productprize[i] << endl;
    }
}

int main()
{

    shop khangsar;
    khangsar.initsupply();

    for (int i = 0; i < 10; i++)
    {
        khangsar.getprize();
    
    }
    khangsar.displayprize();
    

    return 0;
}
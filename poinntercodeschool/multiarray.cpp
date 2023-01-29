#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    int (*p)[3]=arr;

     p=arr;

     cout<<arr<<endl;   // this is the adress of the first element 
    //  cout<<*arr<<endl;   // this is the adress of the first element 
     cout<<*(*arr)<<endl;   // this is the adress of the first element 

     cout<<*arr+1<<endl;
     cout<<*(*arr+1)<<endl;   // this is the adress of the first element 

     cout<<*arr+2<<endl;
     cout<<*(*arr+2)<<endl;   // this is the adress of the first element 

       cout<<*(arr+2)<<endl;
     cout<<*(*(arr+1)+0)<<endl;   // this is the adress of the first element

     cout<<*(arr+2)+1<<endl; 
     cout<<*(*(arr+1)+1)<<endl;   // this is the adress of the first element 

     cout<<*(arr+2)+2<<endl;
     cout<<*(*(arr+1)+2)<<endl;   // this is the adress of the first element 

    return 0;
}
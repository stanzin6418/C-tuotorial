#include<iostream>
using namespace std;

int  sum (int h[], int  size )
{
    int hell=0;
    int i ;

    // cout<<h[2];
     for (int i = 0; i < size ; i++)
     {
     
        hell+=h[i];
     }
      return hell;
}
// while (*h != '\0')
// {
//    hell+=*(h);
//    h++;

// }
//  cout <<hell<<endl;
// }

int main()
{
    int prime[]={2,3,5,7};

    int size =sizeof(prime)/sizeof(prime[0]);

//   cout<<size<<endl;
    // cout << &prime[2];
      
      sum (prime, size );

      cout<<sum<<endl;
    return 0;
}
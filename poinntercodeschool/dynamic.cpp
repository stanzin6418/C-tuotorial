#include<iostream>
using namespace std;

int main()
{
    int n;
    cout <<"enter the size"<<endl;
    cin>>n;

    int*p = (int *) malloc (4* sizeof(int));

    for (int  i = 0; i < n; i++)
    {
       p[i]=i+1;

       cout<<p[i];
    }


     int *p =(int*) realloc (NULL, 7*n*sizeof(int ));
     int size = sizeof(p)/sizeof(p[0]);


     cout <<"the size of the new alloac is "<<size<<endl;


    
    return 0;
}
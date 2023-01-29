#include<iostream>
using namespace std;
 // this is code for finding the size of the arraty 
// int sumofelement(int A[],int size )    // when array is passed as a function argument compiler automatically created a pointer to array with dam name so instead of coping th whole array only the first elemeent is passed 
// {
//       int i;
//       int sum=0;
//     // int size =sizeof(A)/sizeof (A[0]);    // here A is not the array but rather adress of the first element 
//     // cout<<"the size of the array is "<<size<<endl;
//       for (int  i = 0; i < size ; i++)

//       {
//         sum+=A[i];
//       }
//       return sum;
      
// }

// this is code of the incrememnt of  the aray element 

void increment (int A[], int size ){

    int i ;
    for (int  i = 0; i < size ; i++)
    {
      A[i]=2*A[i];
    }
    
}

int main()
{
    int A[]={1,2,3,4,5};
    
    int size =sizeof(A)/sizeof (A[0]);    // here A is an array so the sixe of the array will take whole array 
    cout<<"the size of the array is "<<size<<endl;

    // int total =sumofelement(A, size );
    // cout<<"the sum  of the element is "<<total<<endl;


    increment(A,size);

    for (int  i = 0; i < size ; i++)
    {
        cout <<"the new value of the array is "<<A[i]<<endl;
    }
    
    
    return 0;
}
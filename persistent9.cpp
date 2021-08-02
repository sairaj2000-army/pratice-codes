// write a code to flipped minimum number of bits to convert message p to message Q


#include<iostream>
using namespace std;

int main()
{
    int num1;
    cin>>num1;
    int num2;
    cin>>num2;
    int arr1[100];
    for( int i=0;i<8;i++)
    {

            int rem=num1%2;
            arr1[i]=rem;
            cout<<arr1[i];
            num1=num1/2;
    }
    cout<<"\n";
    int arr2[100];
    for(int i=0;i<8;i++)
    {

            int rem=num2%2;
            arr2[i]=rem;
            cout<<arr2[i];
            num2=num2/2;


    }
    int count =0;
    for(int i=0;i<8;i++)
    {
        if( arr1[i]!=arr2[i] )
        {
            count++;
        }
    }
    cout<<"\n"<<count;

    return 0;
}

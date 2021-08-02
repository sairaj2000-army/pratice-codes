//write a program to print the 1st n numbers in ascending order and remaining in descreasing order

#include<iostream>
using namespace std ;

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for( int i=0;i<k;i++)
    {
        for( int j=0;j<k-i-1;j++)
        {
            if( arr[j]> arr[j+1] )
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"\n";
    for( int i=0;i<n;i++)
    {
        cout<<"\t"<<arr[i];
    }


    for( int  i=0;i<n;i++)
    {
        for( int j=k;j<n-i-1;j++)
        {
            if( arr[j]<arr[j+1] )
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"\n";
    for( int i=0;i<n;i++)
    {
        cout<<"\t"<<arr[i];
    }

    return 0;
}

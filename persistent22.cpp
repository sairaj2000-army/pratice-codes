//write a program to print the smallest permutation of a number

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //sorting the integers in array
    cout<<"\n";
    for( int i=0;i<n;i++)
    {
        for( int j=0;j<n-i-1;j++)
        {
            if( arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }

    }

    //main logic of permutation
    for( int j=1;j<=n;j++)
    {
        for( int i=0;i<n-1;i++)
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;

        }
        cout<<arr[n-1];

    }

    return 0;
}


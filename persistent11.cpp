//alternate sort problem

#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout<<"\n enter the array size ";
    cin>>n;
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //sorting the array
    for( int i=0;i<n;i++)
    {
        for( int j=0;j<n-i-1;j++)
        {
            if( arr[j]>arr[j+1])
            {
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int i=0,j=n-1;
    while( i<j)
    {
        cout<<arr[j--];
        cout<<arr[i++];
    };

    if( n%2!=0)
    {
        cout<<arr[i];
    }



    cout<<"\n";
    for( int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}

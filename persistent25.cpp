//write an algorithm such that all odd numbers comes after even numbers

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[100];
    int temp=0;
    int a[100];
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for( int i=0;i<n;i++)
    {
        if( arr[i]%2==0)
        {
            a[temp]=arr[i];
            temp++;
        }
    }


for(int i=0;i<n;i++)
{
        if( arr[i]%2==1)
        {
           a[temp]=arr[i];
           temp++;
        }
}
    for( int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

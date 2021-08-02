#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[100];
    int low,high;
    cin>>low>>high;
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for( int i=0;i<n;i++)
    {
        if( arr[i]>=low && arr[i]<=high)
        {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}

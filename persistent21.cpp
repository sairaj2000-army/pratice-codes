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
    int number =0;
    int mid = ( n-1 )/2;
    for( int i=0;i<n;i++)
    {
        number = arr[0]+ arr[n-1]+arr[mid];
    }
    cout<<"\n"<<number;
    return 0;
}

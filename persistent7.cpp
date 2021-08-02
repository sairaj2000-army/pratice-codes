//write an algorithm to find the total number of units of memory allocation/deallocation by server1 after processing of all requests

#include<iostream>
using namespace std;

int main()
{
    int arr[100] ;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i=i+2)
    {
        sum=sum+arr[i];

    }
    cout<<"\n"<<sum;
    /*//for server 2
    int sumtemp=0;
    for( int i=1;i<n;i=i+2)
    {
        sumtemp=sumtemp+arr[i];
    }
    cout<<"\n"<<sumtemp;*/

    return 0;
}

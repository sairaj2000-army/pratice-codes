// write an algorithm to calculate the total number of products of any type delivered to the respective client

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
    int sum=0;
    for( int i=0;i<n;i++)
    {
        while(arr[i]>0)
        {
        int temp = arr[i]%10;
        sum=sum+temp;
        arr[i]=arr[i]/10;
        }
        cout<<sum<<" ";
        sum=0;
    }

    return 0;
}

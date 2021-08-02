//problem statement : find the sum of adjacent elements in the given array
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\n enter the number of elements ";
    cin>>n;
    int arr[100];

    cout<<"\n array elements are";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;
    if(n%2==0)
    {
    for(int i=0;i<n;i=i+2)
    {

        sum=( arr[i]+arr[i+1]);
        cout<<"\n"<<sum;
    }
    }
    else
    {
        cout<<"\n invalid";
    }

    return 0;
}

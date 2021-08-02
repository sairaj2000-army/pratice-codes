//write a program to find the count buses in the route after eliminating the routes

#include<iostream>
using namespace std;
int main()
{
    int n;
    int gap;
    cin>>n>>gap;
    int arr[100];
    for( int i=0;i<20;i=i+2)
    {
        arr[i]=i;
    }
    int start, end ;
    int count=0;
    for( int i=0;i<n;i++)
    {
        cin>>start>>end;
        for( int i=start;i<end ;i=i+2)
        {
            if( arr[i]<arr[i+1])
            {
                arr[0]=start;
                arr[n-1]=end;
                count++;
            }

        }

    }
    cout<<"\n"<<arr[count];

    return 0;
}

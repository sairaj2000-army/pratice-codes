//write a program to obtain the distinct elements of an arrray by removing the duplicate elements

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[100];
    int frequency[100];
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
        frequency[i]=-1;
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        count=1;
        for( int j=i+1;j<n;j++)
        {
            if( arr[i]==arr[j])
            {
                count++;
                frequency[j]=0;
            }
            if( frequency[i]!=0)
            {
                frequency[i]=count;
            }
        }
    }
    cout<<"\n";
    for( int i=0;i<n;i++)
    {
        if( frequency[i]>=1)
        {
            cout<<arr[i];
        }
    }


    return 0;
}

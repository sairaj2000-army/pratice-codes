// write a program to find the unique element from a array

#include<iostream>
using namespace std;

int main()
{
    int n;
    int frequency[100];
    cout<<"\n enter the array size ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cout<<" ";
        cin>>arr[i];
        frequency[i]=-1;
    }
    //int frequency[100];
    int count=0;
    for(int i=0; i<n ; i++)    //traverses entire array once so frequency is one
    {
        count =1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]== arr[j] )
            {
                count++;
                frequency[j]=0;

            }

        }
        if(frequency[i]!=0)
        {
            frequency[i]=count ;
        }

    }

    for(int i=0;i<n;i++)
    {
        if(frequency[i]==1)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}


#include<iostream>
using namespace std;

int main()
{
    int ar[100];
    int n;
    cout<<"\n enter the array size ";
    cin>>n;
    cout<<"\n array is ";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }


    int temp =0;
    int pass=0;
    cout<<"\n bubble sort is";
    for(int i=0 ;i<n-1 ;i++)
    {
        for(int j=0 ;j<n-i-1;j++)
        {

            if(ar[j]>ar[j+1] )
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
        pass++;
        cout<<"\n";
        for(int i=0;i<n;i++)
        {
            cout<<ar[i]<<"\t";
        }

    }
        /*cout<<"\n sorted array in bubble sort is ";
        for(int i=0;i<n;i++)
        {
            cout<<ar[i]<<"\t";
        }
        cout<<"\n total passes in bubble sort "<<pass;*/

        cout<<"\n";
        int start=0;
        int end =n-1;
        while(start<end )
        {

            cout<<ar[end--]<<" ";
            cout<<ar[start++]<<" ";

        };
        if(n%2 != 0)
        {
            cout<<"\n alternating sorted array is "<<ar[start];
        }
        return 0;
}


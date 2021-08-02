#include<iostream>
using namespace std;

int main()
{
    int a[100];
    int b[100];
    int k=0;
    int j;
    int n;
    cin>>n;
    cout<<"\n enter the array elements ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for( int i=0;i<n;i++)
    {
        for(  j=0; j<k ; j++)
        {
            if(a[i] == b[j] )
            {
                break;
            }
        }
        if(j==k)
        {
            b[k]=a[i];
            k++;
        }
    }

    cout<<"\n final array without duplicate elements are ";
    for( int i=0;i<k;i++)
    {
        cout<<"\n"<<b[i];
    }
    return 0;
}

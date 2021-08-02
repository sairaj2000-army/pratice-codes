//*******************MIN ELEMENT IN AN ARRAY *************

#include<iostream>
using namespace std;

int main()
{
    int ar[20] = {12,31,45,12,7,2,8,67,234,1};
    int min=ar[0];
    int n;
    cout<<"\n enter the max size ";
    cin>>n;

    for( int i=0 ;i<n ;i++)
    {
        if( ar[i]<min )
        {
            min=ar[i];
        }

    }
    cout<<"\n min element is \t"<<min;

    int max=ar[0];
    for(int j=0 ; j<n ; j++)
    {
        if(ar[j]>max )
        {
            max = ar[j];
        }
    }
    cout<<"\n maximum element is "<<max;
    return 0;


}


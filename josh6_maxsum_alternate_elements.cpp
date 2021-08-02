#include<iostream>
using namespace std;

int main()
{
    int ar[100];
    int n;
    cout<<"\n enter the array size ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int a= ar[0];
    int b=0;
    int maxsum=0;

    for(int i=1;i<n;i++)
    {
        //current max excluding i
        maxsum= (a>b)?a:b;

        //current max including i
        a=b + ar[i];
        b = maxsum;


    }
    if( a>b)
    {
        cout<<"\n max sum for a is  "<<a;
    }
    else
    {
        cout<<" max sum for b is "<<b;
    }

    return 0;
}


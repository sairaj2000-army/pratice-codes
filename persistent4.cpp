// write a program to find the product of a and b is maximum from the two given ranges

#include<iostream>
using namespace std;

int main()
{
    int l1=0,r1=0,l2=0,r2=0,a=0,b=0;
    int result ;
    cout<<"\n enter the ranges ";
    cin>>l1>>r1>>l2>>r2;
    a=max( l1,r1);
    b=max(l2,r2);

    if( a>=l1 && a<=r1 && b>=l2 && b>=r2)
    {
        result = a*b;
    }
    cout<<"\n "<<result ;


    return 0;
}

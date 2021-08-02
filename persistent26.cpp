// write a program to find the GCD and LCM of two numbers

#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    int hcf , lcm;
    cin>>n1>>n2;
    for( int i=1;i<n1;i++)
    {
        if( n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    cout<<"\n"<<hcf;
    lcm=( n1*n2)/hcf;
    cout<<"\n"<<lcm;
    return 0;
}

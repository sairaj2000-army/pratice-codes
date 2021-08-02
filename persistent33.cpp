//write a program to convert binary to decimal

#include<iostream>
using namespace std;

int main()
{
    int number;
    cin>>number;
    int decimal=0,b=1;
    while(number>0)
    {
        int rem=number%10;
        decimal = decimal + rem*b;
        b=b*2;
        number=number/10;

    };
    cout<<decimal;
    return 0;
}

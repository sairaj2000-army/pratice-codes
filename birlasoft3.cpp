//*********** swap a variable without using 3rd variable ********
#include<iostream>
using namespace std;

int main()
{
    int a=10 , b=20;
    cout<<"\n numbers before swapping "<<a<<" " <<b;
    a=a+b ;
    b=a-b;
    a=a-b;
    cout<<"\n values after swapping "<<a<<" " <<b;

    return 0;
}


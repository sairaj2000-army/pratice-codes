// write a program to replace a character by

#include<iostream>
using namespace std;

int main()
{
    char a ;
    cin>>a ;
    int key ;
    cin>>key;

    if( ((a+key)<=122 && (a+key)>=97 ) ||  ( (a+key)>=65 && (a+key)<=90 ) )
    {
        a=a+key;
        cout<<a;
    }
    else
    {
        a=a+key-26;
        cout<<a;
    }

    /*if( (a+key)>=65 && (a+key)<=90)
    {
        a=a+key;
        cout<<a;
    }
    else
    {
        a=a+key-26;
        cout<<a;
    }*/

    return 0;
}

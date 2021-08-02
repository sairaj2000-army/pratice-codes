//write a program to count number appearances of a character in a string

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100];
    cin>>str;
    int n=strlen(str);
    char key ;
    cout<<"\n enter the key ";
    cin>>key;
    int count=0;
    for( int i=0;i<n;i++)
    {
        if(str[i]==key)
        {
            count++;
        }


    }
    cout<<"\n"<<count;
    return 0;

}

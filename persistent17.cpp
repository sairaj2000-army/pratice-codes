//write a program to print the number of characters that do not change their their position on reversing the string

#include<iostream>
#include<string>
using namespace std;

int main()
{
    char str[100];
    cin.getline(str,20);
    int n=strlen(str);
    int count=0;
    cout<<"\n";
    char str1[100];
    for( int i=0;i<n;i++)
    {
        str1[i]=str[n-i-1];     //assigning reverse of str to str1
    }
    for( int i=0;i<n;i++)
    {
        if( str[i]==str1[i])
        {
            count++;
        }
    }
    cout<<"\n"<<count;
    return 0;
}



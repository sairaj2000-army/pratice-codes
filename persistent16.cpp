//write a program to count to count the number of appearances of a character in a string

#include<iostream>
#include<string>
using namespace std;

int main()
{
    char str[100];
    cin.getline( str,20);
    int n=strlen(str);
    char ch ;
    cin>>ch;
    int count=0;
    for( int i=0;i<n;i++)
    {
        if( str[i]==ch)
        {
            count++;
        }
    }
    cout<<count;
}

//write a program to print a string excluding the vowels

#include<iostream>
#include<string>
using namespace std;

int main()
{
    char str[100];
    cin.getline( str, 20);
    int n=strlen(str);
    for( int i=0;i<n;i++)
    {
    if( str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U')
        {
            cout<<str[i];
        }
    }

    return 0;
}

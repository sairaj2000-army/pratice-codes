//write a program to print the integer representing the number of misses in a given input by the user

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100];
    cin.getline(str,20);
    char ch ;
    int count =0;
    int n=strlen(str);
    cout<<n;
    for( int i=0;i<n;i++)
    {
        if( ( str[i]>=65 && str[i]<=90 ) || ( str[i]>=97 && str[i]<=122 ) || str[i]==' ' || ( str[i]>='0' && str[i]<='9') )
        {
            continue ;
        }
        else
        {
            count ++;
        }
    }
    cout<<"\n"<<count ;

    return 0;
}

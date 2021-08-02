// wirte an algorithm to print the substring with max occurences

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char str[100];

    for( int i=0;str[i]!='\0';i++)
    {
        cin>>str[i];
    }

    for( int i=0;i<n;i++)
    {

        cout<<str[i];

    }
    return 0;
}

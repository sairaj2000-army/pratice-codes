#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char str[100];
    for( int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    int count =0;
    char ch ;
    for( int i=0;i<n;i++)
    {
        ch=str[i];
        if( ch!='a' && ch !='e' && ch!='i' && ch!='o' && ch!='u' )
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}

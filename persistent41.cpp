#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int result=1;
    int count =0;
    for( int i=0;i<=5;i++)
    {
        result=result*i;
    }

    string str=to_string(result);
    int len=str.length();
    for( int i=0;i<len;i++)
    {
        if( str[i]=='0')
        {
            ++count;
        }
    }
    cout<<count;
}

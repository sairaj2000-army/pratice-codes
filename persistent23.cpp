//write a program to find whether a student can appear in exam based on %

#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cin.getline(str,100);
    int n=strlen(str);
    cout<<n;
    int count=0;
    int min;
    cin>>min;
    for( int i=0;i<n;i++)
    {
        if( str[i]=='1')
        {
            count++;
        }
    }

    int result ;
    result= ( count*100)/n;
    cout<<"\n"<<result<<" " ;

    if( result>min)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}

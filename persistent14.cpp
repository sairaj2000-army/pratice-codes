//write a program to count the number of characters that are not repeated in a string

#include<iostream>
#include<string>
using namespace std;

int main()
{
    char str[100];
    cin.getline(str,50);
    int frequency[100];
    int count =0;
    int n=strlen(str);
    for( int i=0;i<n;i++)
    {
        frequency[i]=-1;
    }

    for(int i=0; i<n ;i++)
    {
        count=1;
        for( int j=i+1;j<n;j++)
        {
            if( str[i]==str[j])
            {
                count++;
                frequency[j]=0;
            }
        }
        if( frequency[i]!=0)
        {
            frequency[i]=count;
        }

    }
    int count1=0;
    for( int i=0;i<n;i++)
    {
        if( frequency[i]==1)
        {
            cout<<str[i];
            count1++;
        }
    }
    cout<<"\n"<<count1;

    return 0;
}

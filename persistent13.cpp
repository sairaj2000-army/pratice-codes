//write a program to find the character during the transmission of a string
#include<iostream>
#include<string>
using namespace std;

int main()
{
    char str1[100];
    char str2[100];
    cin.getline(str1,20);
    cin.getline(str2,20);
    int n1=strlen(str1);
    int n2=strlen(str2);
    if( n1!=n2)
    {
       for( int i=0;i<n1;i++)
       {
           for( int j=0;j<n2;j++)
            {
                if( str1[i]==str2[j] )
                {
                    break;
                }
               else if( j==n2-1)
                {
                    cout<<str1[i];
                    break;
                }
            }
       }
    }

    return 0;
}

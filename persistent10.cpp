//  write a program to find word 1 is aright rotation of word 2

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word1;
    string word2;
    cin>>word1>>word2;
    int n1= word1.length();
    int n2= word2.length();
    if( n1!=n2)
    {
        cout<<"\n strings not equal ";
    }
    else
    {
        string result = word1+word1;
        cout<<result;
        cout<<"\n";
        for(int i=0;i<n1 ;i++)
        {
            int j=0;
            if( result[i]==word2[j])
            {
                if( j=n2)
                {
                    cout<<"\n"<<1;  //string 2
                }
                else
                {
                    cout<<"\n"<<-1;
                }
            }
        }
    }


    return 0;
}

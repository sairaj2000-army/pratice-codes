//write a program to print number of repeated words in the array of words

#include<iostream>
#include<string>
using namespace std;

int main()
{
    char str[100];
    cin.getline(str, 50);
    int n=strlen(str);
    int count=0;
    char words[100][100];
    int row=0,col=0;
    for( int k=0;k<n;k++)
    {
        if( str[k]!=' ' && str[k]!='\0')
        {
            words[row][col++]=str[k];
        }
        else
        {
            words[row][col]='\0';
            row++;
            col=0;
        }
    }
    int length =row+1;
    for( int i=0;i<length;i++)
    {
        count=1;
        for( int j=i+1;j<length;j++)
        {
            if( strcmp(words[i],words[j])==0 && strcmp(words[j],"0")!=0)
            {
                count++;
                strcpy(words[j],"0");

            }
        }
        if( count>1)
        {
            cout<<"\n"<<words[i];
        }
    }







    return 0;
}

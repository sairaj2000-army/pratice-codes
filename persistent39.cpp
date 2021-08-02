//write an algorithm to output the state of the cells after the given number of days

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cells[100];
    for( int i=0;i<n;i++)
    {
        cin>>cells[i];
    }
    int days ;
    cin>>days;
    //int cells[100];

    for( int j=0;j<days;j++)
    {
        int copycell[100];
        for( int i=1;i<9;i++)
        {
            copycell[i]=cells[i-1];
        }
        copycell[0]=0;
        copycell[9]=0;
        for( int i=0;i<8;i++)
        {
            cells[i]=copycell[i]==copycell[i+2]?0:1;
        }
    }

    for( int i=0;i<8;i++)
    {
        cout<<cells[i]<<" ";
    }


    return 0;
}

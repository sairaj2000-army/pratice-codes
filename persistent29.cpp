//write an algorithm to find the maximum revenue each day

#include<iostream>
using namespace std;

int main()
{
    int row , col;
    cin>>row>>col;
    int arr[100][100];
    for( int i=0;i<row;i++)
    {
        for( int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    int max=0;
    int result[100];
    for( int i=0;i<row;i++)
    {
        for( int j=0;j<col;j++)
        {
            if( arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
        result[i]=max;
        max=0;  //imp step;
    }

    for( int i=0;i<row;i++)
    {
        cout<<result[i]<<" ";
    }

    return 0;
}

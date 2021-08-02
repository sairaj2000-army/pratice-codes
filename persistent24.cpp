//write a program to find the house between which he can build his largest possible house

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\n enter the number of houses ";
    cin>>n;
    int house_num[100];
    int position[100];
    cout<<"\n enter the house number and position ";
    for( int i=0;i<n;i++)
    {
        cin>>house_num[i];
        cin>>position[i];
    }

    int copy_pos[100];
    for( int i=0;i<n;i++)
    {
        copy_pos[i]=position[i];
        //cout<<copy_pos[i];
    }

    for( int i=0;i<n;i++)
    {
       for( int j=0;j<n-i-1;j++)
       {
           if( copy_pos[j] >copy_pos[j+1] )
           {
               int temp=copy_pos[j];
               copy_pos[j]=copy_pos[j+1];
               copy_pos[j+1]=temp;
           }
       }
    }
    cout<<"\n";
    for( int i=0;i<n;i++)
    {
        cout<<copy_pos[i];
    }
    cout<<"\n";
    int result=0;
    int x1,x2;
    int position1,position2;
    int maxval=0;
    for( int i=0;i<n-1;i++)
    {
        result= abs(copy_pos[i+1]-copy_pos[i] );
        cout<<"\t"<<result;
        if( result>maxval)
        {
            maxval=result;
            x1=copy_pos[i];
            x2=copy_pos[i+1];

        }
    }
    cout<<"\n";
    for( int i=0;i<n;i++)
    {
        if( x1==position[i])
        {
            position1=i;
        }
        else if( x2==position[i])
        {
            position2=i;
        }
    }

    if( house_num[position1]>   house_num[position2])
    {
        cout<<house_num[position2]<<" "<<house_num[position1];
    }
    else
    {
        cout<<house_num[position1]<<" "<<house_num[position2];
    }



    return 0;
}

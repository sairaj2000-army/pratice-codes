//****************to remove duplicate elements from a array*****************

#include<iostream>
using namespace std;

int main()
{
    int ar[100]={1,1,3,2,6,3,6,3,8,9,8,5,3,5,};
    int count=0;
    int j=0;
    cout<<"\n array elemnts are ";
    for(int i=0 ; i<8; i++)
    {
        cout<<ar[i];
    }

    for( int i=0 ; i<8;i++)
    {
        cin>>ar[i];
        for( j=0 ; j<count ;j++)
        {
            if(ar[i]==ar[j] )
            {
                break;
            }
        }
        if(j==count)
        {
            ar[count]=ar[i];
            count++;

        }
    }
    cout<<"\n repeating elements are";
    for( int i=0 ;i<count ;i++)
    {
        cout<<ar[i];
    }

    return 0;

}


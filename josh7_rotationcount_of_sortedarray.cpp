#include<iostream>
using namespace std;

int main()
{
    int ar[100];
    int n;
    cout<<"\n enter the array count ";
    cin>>n;
    cout<<"\n array elements ";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int min_index;
    int min_element=ar[0];  //initially
    for(int i=0;i<n;i++)
    {
        if( min_element > ar[i] )
        {
            min_element=ar[i];
            min_index=i;
        }
    }
    cout<<"\n rotation count "<<min_index;


    return 0;
}

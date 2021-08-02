//write a program to find the total energy produced during the reaction at nth second

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rate ;
    cin>>rate;
    int sec;
    cin>>sec;
    int result=n;
    int sum=0;
    int arr[100];
    for( int i=0;i<sec;i++)
    {
        cout<<result<<" ";
        sum=sum+result;
        result =  result+rate  ;


    }
    cout<<sum;

    return 0;
}



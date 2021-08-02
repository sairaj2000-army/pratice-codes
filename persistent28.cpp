// write a program to determine the max number of weeks an employee can work on a project

# include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max =0;
    for( int i=0;i<n;i++)
    {
        if( arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        max=arr[n-1];
    }
    cout<<max;

    int sum=0;
    for( int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"\n"<<sum;
    int result=sum-max;
    int answer=0;
    if(  (result+1) < max)
    {
        answer= (2*result)+1;
    }
    else
    {
        answer = sum;
    }
    cout<<"\n"<<answer;

    return 0;
}

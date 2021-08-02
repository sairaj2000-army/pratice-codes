//write a program that takes a number and prints the number of ones in the binary format of that number

#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"\n enter the number ";
    cin>>number;
    int result=0;
    int arr[100];
    int count=0;
    for(int i=0;i<3;i++)
    {
        //number=number/2;
        int rem=number%2;
        arr[i]=rem;
        cout<<arr[i];
        number=number/2;
    }
    cout<<"\n";
    for(int i=2;i>=0;i--)
    {
        cout<<arr[i];
    }
    cout<<"\n";
    for(int i=0;i<3;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
    }
    cout<<count;


    return 0;

}

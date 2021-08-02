//write an algorithm to count the number of occurences of a integer in a given number

#include<iostream>
using namespace std;

int main()
{
    int key;
    cin>>key;
    int number ;
    cin>>number;
    int count =0;

    while( number>0)
    {
        int temp=number%10;
        if(temp==key)
        {
            count++;
        }
        number=number/10;

    };
    cout<<"\n"<<count;
    return 0;
}

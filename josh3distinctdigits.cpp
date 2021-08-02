#include<iostream>
using namespace std;

int main()
{
    int left=1 , right ;
    cin>>right ;
    int number;
    for(int i=left ;i<=right ;i++)
    {
        number=i;
        int visited[100]= {0};
        while(number)
        {
            if(visited[number%10] )
            {
                break;
            }
            visited[number%10]=1 ;
            number=number/10;


        }; //end while
        if( number==0 )
        {
            cout<<i<<" ";
        }
        cout<<"\n";

        //to know which are the repeated numbers
        if(number!=0)
        {
            cout<<"\n repeated numbers are "<<i<<" "<<"\n";
        }


    }//end for

    return 0;

}

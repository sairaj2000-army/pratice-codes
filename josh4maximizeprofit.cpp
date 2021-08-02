#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int prices[10];
    cout<<"\n enter the prices ";
    for(int i=0;i<n;i++)
    {
        cin>>prices[i];
    }
    int maxprofit=0;
    //iteration of prices array from (0+1)th index
    for(int i=1;i<n;i++)
    {
        if(prices[i] > prices[i-1] )
        {
            maxprofit=maxprofit + ( prices[i]- prices[i-1] ) ;
        }
    }
    cout<<"\n"<<maxprofit ;

    return 0;

}


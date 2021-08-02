//write an algorithm to find ID of solider after kth position in line after all the actions

#include<iostream>
using namespace std;

int main()
{
    int n , actions , x, no_of_soliders, y, ID[100] , fin;  // x means rows and y means col
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ID[i]=i+1;
    }
    cin>>actions>>no_of_soliders;

    for(int k=actions;k>0;k--)
    {
        cin>>x>>y;

        for(int i=x;i<(y-x)/2+1;i++)
        {
            int temp=ID[i];
            ID[i]=ID[y-1];
            ID[y-1]=ID[i];
        }
    }
    cin>>fin;
    cout<<"\n"<<ID[fin];

    return 0;

}

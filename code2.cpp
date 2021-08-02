#include<iostream>
using namespace std;

int main()
{
        int arr[100];
        int n;
        cout<<"\n enter the count of numbers ";
        cin>>n;
        cout<<"\n enter the nos of ur choice ";
        for(int i=0 ; i<n ;i++)
        {
            cin>>arr[i];
        }
        for(int i=0 ; i<n ;i++)
        {
            cout<<"\n"<<"\t"<<arr[i];
        }

        int count=0;
        cout<<"\n enter the count of even nos";

        for(int i=0 ; i<n; i++)
        {
            if(arr[i]%2==0)
            {
                    cout<<"\n"<<arr[i]<<" no is a even number ";
                    count++;
            }
        }
       //in>>count;
        cout<<"\n count of even nos is "<<count ;


        int key ;
        cout<<"\n enter the key u want to search ";
        cin>>key;
        for(int i=0 ; i<n ;i++)
        {
                if(arr[i]==key)
                {
                        cout<<"\n key found";

                }

        }






        return 0;

}


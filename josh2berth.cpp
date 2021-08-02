#include<iostream>
using namespace std;

int main()
{
    int strength;
    cout<<"\n enter the max strength";
    cin>>strength;
    if(strength>0 && strength<53)
    {
            if( strength%8==1 || strength%8==4)
            {
                cout<<strength<<" is a lower berth ";
            }
            else if( strength%8==2 || strength%8==5)
            {
                cout<<strength<<" is middle berth ";
            }
            else if( strength%8==3 || strength%8==6)
            {
                cout<<strength<<" is upper berth ";
            }
            else if( strength%8==7)
            {
                cout<<strength<<" is a side lower berth ";
            }
            else
            {
                cout<<strength<<" is a side upper berth ";
            }
    }
    else
    {
        cout<<"\n invalid seat number ";
    }



    return 0;

}


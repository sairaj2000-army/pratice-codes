#include<iostream>
using namespace std;



int count_rotations(int arr[] , int low , int high)
{
    if(high<low)
    {
        return 0;
    }
    if( low==high)
    {
        return low;
    }
    int mid = (low+high)/2;
    if( mid<high && arr[mid+1] < arr[mid] )
    {
        return mid+1;
    }
    if( mid>low && arr[mid-1] > arr[mid] )
    {
        return mid ;
    }

    if( arr[high] > arr[mid] )
    {
        return count_rotations( arr,low, mid-1 );
    }
    return count_rotations(arr,mid+1,high);

}   //end fun

int main()
{
    int arr[] = {15,18,2,4,6,12,10,26};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<count_rotations(arr,0,n-1);
    //cout<<"\n"<<count ;
    return 0;
}







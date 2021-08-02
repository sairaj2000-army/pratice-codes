#include<iostream>

using namespace std;

class operation
{

            int arr[100];
        public:
            void array_access();
            void display();
            void bubble_sort();
            void selection_sort();

};

void operation :: array_access()
{
       int n ;
       int count=0;
       cout<<"\n enter the number of array elements ";
       cin>>n;
       cout<<"\n enter the array elements ";
       for(int i=0 ;i<n ;i++)
       {
           cin>>arr[i];
       }
       for(int i=0 ;i<n ;i++)
       {
           cout<<"\n";
           cout<<"\t"<<arr[i];
           count++;
        }
        cout<<"\n count of array is "<<count;

}

//--------------------------------------------------------------------------------------------

void operation :: bubble_sort()
{
        int a[]={9, 2,7,4,3,97,25,100,78,82};
        cout<<"\n input to array is ";
        int n;
        cout<<"\n enter the count of elements ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<"\t";
        }

        //logic for bubble_sort
        int temp =0;
        int pass=0;
        cout<<"\n bubble sort is";
        for(int i=0 ;i<n-1 ;i++)
        {
            for(int j=0 ;j<n-i-1;j++)
            {

                if(a[j]>a[j+1] )
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
            pass++;
        cout<<"\n";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<"\t";
        }

        }
        cout<<"\n sorted array in bubble sort is ";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<"\t";
        }
        cout<<"\n total passes in bubble sort "<<pass;


}
//------------------------------------------------------------------------------------------------------------------------

void operation :: selection_sort()
{
      int a[]={9, 2,7,4,3,97,25,100,78,82};
      cout<<"\n input to array is ";
      int n;
      cout<<"\n enter the count of elements ";
      cin>>n;

      //logic for selection sort
        int temp =0 ;
        int pass=0;
        int k=0;
        cout<<"\n selection sort is ";
        for(int i=0 ; i<n-1 ; i++)
        {

                k=i;    // to track the smallest element in remaining array other than ith element
                for(int j=i+1 ; j<n ;j++)
                {
                    if(a[j] < a[k] )
                    {
                        k=j;
                    }
                }
                if(k!=i)
                {
                        temp=a[i];
                        a[i]=a[k];
                        a[k]=temp;
                }

                pass++;
                cout<<"\n ";
                for( int i=0 ; i<n;i++)
                {
                        cout<<a[i]<<"\t";
                }

        }
        cout<<"\n  sorted sorted array in selection sort is \t ";
        for(int i=0 ;i<n;i++)
        {
            cout<<a[i]<<"\t";
        }
        cout<<"\n no of passes is "<<pass;

}






int main()
{
    operation  a ;
    a.array_access();
    a.bubble_sort();
    a.selection_sort();


    return 0;


}

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int s,n,m;
    cin>>s>>n>>m;
    int ans=0;
    for( int i=1;i<n;i++)
    {
        ans=ans+( s*s);
    }
    cout<<ans<<"\n";
    ans=ans%10;
    cout<<"\n"<<ans;
    int sum=0;

    for( int i=0;i<m;i++)
    {
            sum=(ans*ans);
    }
    cout<<"\n"<<sum;
    ans=ans%10000007;
    cout<<ans;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 998244353
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        if(n%2==1)
        {
            cout<<"0\n";
        }
        else{
            ll ans=1;
            for(i=1;i<=n/2;i++)
            {
                ans=(ans*i)%mod;
            }
            for(i=1;i<=n/2;i++)
            {
                ans=(ans*i)%mod;
            }
            cout<<ans<<endl;
        }
    }
}

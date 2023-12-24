#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        ll n,x,t,i;
        cin>>n>>x>>t;

            ll x1=t/x;
            ll sum=0;
            if(x1>=n)
            {
                ll ans=(n*(n-1))/2;
                cout<<ans<<endl;
                continue;
            }
            sum+=(n-x1)*x1;
            sum+=((x1-1)*x1)/2;
            cout<<sum<<endl;

    }
}

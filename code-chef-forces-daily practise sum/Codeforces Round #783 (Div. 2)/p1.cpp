#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i;
        cin>>n>>m;
        if(abs(m-n)>1)
        {
            if(m==1 || n==1)
            {
                cout<<"-1\n";
                continue;
            }
        }
        ll ans;
        ll temp=abs(m-n);
        if(temp%2==1)
        {
            ans=2*min(m,n)-2+2*(abs(m-n))-1;
        }
        else{
            ans=2*min(m,n)-2+2*(abs(m-n));
        }
        cout<<ans<<endl;
    }
}

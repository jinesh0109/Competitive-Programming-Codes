#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r,k,i;
        cin>>l>>r>>k;
        ll c=0;
        if(l==r && l>1)
        {
            cout<<"YES\n";
            continue;
        }
        if(l%2==0 && r%2==0)
        {
            c+=(r-l)/2+1;
        }
        else if(l%2==0 || r%2==0)
        {
            c+=(r-l)/2+1;
        }
        else{
            c+=(r-l)/2;
        }
        if(r-l+1-c<=k)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}


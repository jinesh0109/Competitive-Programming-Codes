#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,i;
    cin>>a>>b;
    ll sum=a+b;
    sum=sum/4;
    ll ans=min(sum,min(a,b));
    cout<<ans<<endl;
    }

}

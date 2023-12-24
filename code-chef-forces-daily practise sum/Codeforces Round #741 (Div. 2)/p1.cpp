#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        ll a=(r/2)+1;
        if(a<l)
        {
            a=l;
        }
        cout<<r%a<<endl;
    }
}

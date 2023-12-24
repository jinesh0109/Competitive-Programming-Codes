#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%9==0)
        {
            ll temp=(a+b+c)/9;
            if(a>=temp && (b>=temp && c>=temp))
            {
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";

            }
        }
        else{
            cout<<"NO\n";
        }
    }
}

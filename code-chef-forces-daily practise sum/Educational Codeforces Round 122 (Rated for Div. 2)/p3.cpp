#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll h1,d1,h2,d2,k,w,a;
        cin>>h1>>d1>>h2>>d2>>k>>w>>a;
        int flag=1;
        for(ll i=0;i<=k;i++)
        {
            ll a1=(h1+i*a),d22=d2;;
            ll a2=h2,d11=(d1+(k-i)*w);
            if(((a1+d22-1)/d22)>=((a2+d11-1)/d11))
            {
                flag=0;
            }
        }
        if(((h1+d2-1)/d2)>=((h2+d1-1)/d1))
        {
            flag=0;
        }
        if(flag==1)
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

    }
}

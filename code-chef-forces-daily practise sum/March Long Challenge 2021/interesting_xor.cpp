#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll c,i;
        cin>>c;
        if(c==1)
        {
            cout<<"0\n";
            continue;
        }
        i=1;
        ll ans;
        while(i<=c)
        {
            if(i==c)
            {
                ans=(i-1)*(i*2-1);
                break;
            }
                i=i*2;
        }
        if(i>c)
        {
            ll temp;
            temp=(i/2-1)^c;
            ans=temp*((i/2)-1);
        }
        cout<<ans<<endl;

    }
}

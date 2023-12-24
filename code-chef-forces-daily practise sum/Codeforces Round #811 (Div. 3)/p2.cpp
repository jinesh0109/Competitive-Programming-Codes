#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        map<ll,ll> m;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        ll c=0;
        ll c1=n;
        ll temp=m.size();
        for(i=0;i<n;i++)
        {

            if(c1!=temp)
            {
                c1--;
                c++;
                m[arr[i]]--;
                if(m[arr[i]]==0)
                    temp--;
            }
            else{
                break;
            }
        }
        cout<<c<<endl;

    }

}

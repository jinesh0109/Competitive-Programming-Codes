#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        map<ll,ll>m;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        if(n==1)
        {
            cout<<"0\n";
            continue;
        }
        auto it=m.begin();
        ll max1=0;
        while(it!=m.end())
        {
            if((*it).second>max1)
            {
                max1=(*it).second;
            }
            it++;
        }
        if(max1==n)
        {
            cout<<"0\n";
            continue;
        }
        int miss=n-max1;
        int ans=miss;
        int temp=n;
        int ans1=max1;
        for(i=1;i<=30;i++)
        {
            ans1=ans1*2;
            if(ans1>=temp)
            {
                ans=ans+(i);
                break;
            }

        }
        cout<<ans<<endl;
    }
}

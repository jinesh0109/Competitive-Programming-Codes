#include<bits/stdc++.h>
#define ll long long int
#include<unordered_map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,k,i;
        cin>>a>>b>>k;
        ll arr[k],arr1[k];
        unordered_map <ll,ll> m,m1;
        for(i=0;i<k;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        for(i=0;i<k;i++)
        {
            cin>>arr1[i];
            m1[arr1[i]]++;
        }
        if(k==1)
        {
            cout<<"0\n";
            continue;
        }
        ll ans=(k*(k-1))/2;

        auto it=m.begin();
        while(it!=m.end())
        {

            if((*it).second>1)
            {
                ans-= ((*it).second * ((*it).second-1))/2;
            }
            it++;
        }
        auto it1=m1.begin();
        while(it1!=m1.end())
        {

            if((*it1).second>1)
            {
                ans-= ((*it1).second * ((*it1).second-1))/2;
            }
            it1++;
        }
        if(ans<=0)
            ans=0;

        cout<<ans<<endl;

    }
}

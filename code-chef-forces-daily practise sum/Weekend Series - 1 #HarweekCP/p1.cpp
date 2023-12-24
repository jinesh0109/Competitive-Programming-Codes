#include<bits/stdc++.h>
#define ll long long int
#include <unordered_map>
#include<iterator>
using namespace std;
int main()
{
    ll n,k,m,i;
    cin>>n>>k>>m;
    ll arr[n];
    for(i=0;i<n;i++)cin>>arr[i];

    unordered_map<ll,ll>m1;
    for(i=0;i<n;i++)
    {
        m1[arr[i]%m]++;
    }
    auto it=m1.begin();
    ll max1=1,max2=1;
    while(it!=m1.end())
    {
        if((*it).second>max1)
        {
            max1=(*it).second;
            max2=(*it).first;
        }
        it++;
    }
    ll c=0;
    if(max1>=k)
    {
        cout<<"Yes\n";
        for(i=0;i<n;i++)
        {
            if(arr[i]%m==max2)
            {
                c++;
                if(c<=k)
                {
                    cout<<arr[i]<<" ";

                }
            }
        }
    }
    else{
        cout<<"No\n";
    }

}

#include<bits/stdc++.h>
#define ll long long int
#include<set>
#define pb push_back
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        vector<ll> v[n+1],v1[n+1];

        ll arr[n],arr1[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>arr1[i];
            v[arr[i]].pb(arr1[i]);
        }
        for(i=1;i<n+1;i++)
        {
            sort(v[i].rbegin(),v[i].rend());
            ll sum=0;
            for(j=0;j<v[i].size();j++)
            {
                sum+=v[i][j];
                v1[i].pb(sum);
            }
        }
        ll sum1[n+1]={0};
        for(i=1;i<=n;i++)
        {
            for(j=0;j<v1[i].size();j++)
            {
                sum1[j+1]+=v1[i][(v1[i].size()-1)-(v1[i].size()%(j+1))];
            }
        }
        for(i=1;i<=n;i++)
        {
            cout<<sum1[i]<<" ";
        }
        cout<<"\n";

    }
}

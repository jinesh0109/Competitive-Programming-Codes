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
        ll min1=INT_MAX,min2=INT_MAX,minind=1,minind1=1;
        vector<pair<int,int>>v;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            v.push_back(make_pair{arr[i],i+1});

        }
        if(n==1)
        {
            cout<<"1 1\n";
            continue;
        }
        sort(v.begin(),v.end());
        auto it=v.begin();
        auto it1=v.begin();
        it1++;
        cout<<(*it).second<<" "<<(*it1).second<<endl;


    }
}

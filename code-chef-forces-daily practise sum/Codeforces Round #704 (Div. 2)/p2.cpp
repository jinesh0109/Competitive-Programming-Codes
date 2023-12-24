#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<iterator>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        ll arr[n];
        bool arr1[n];
        for(i=0;i<n;i++)
        {
            arr1[i]=0;
        }
        map<ll,ll>m;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            m[n-arr[i]+1]=i;
        }
        vector<ll>v;
        map<ll,ll>::iterator it=m.begin();
        //auto it=m.begin();
        while(it!=m.end())
        {
            if(arr1[(*it).second]==0)
            {
                for(j=(*it).second;j<n;j++)
                {
                    if(arr1[j]==0)
                    {
                        v.push_back(arr[j]);
                        arr1[j]=1;
                    }
                    else{
                        break;
                    }
                }
            }
            it++;
        }
        for(i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";


    }
}

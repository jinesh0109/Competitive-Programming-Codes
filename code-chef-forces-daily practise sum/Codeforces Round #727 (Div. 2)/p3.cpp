#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,k,x,i;
    cin>>n>>k>>x;
    ll arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<ll>v;
    sort(arr,arr+n);
    for(i=1;i<n;i++)
    {
        if(arr[i]-arr[i-1]>x)
        {
            v.push_back(arr[i]-arr[i-1]);
            //cout<<arr[i]<<endl;
        }
    }
    //cout<<v.size()<<endl;
    sort(v.begin(),v.end());
    ll c=0;
    for(i=0;i<v.size();i++)
    {
        ll ans1=(v[i]-1)/x;
        if(ans1>k)
        {
            break;
        }
        else{
            k-=ans1;
            c++;
        }
        //cout<<" k "<<k<<" i"<<i<<endl;
    }
    cout<<v.size()-c+1<<endl;
}

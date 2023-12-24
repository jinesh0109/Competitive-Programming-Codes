
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i;
        cin>>n>>m;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll c=0,c1=m;
        c+=2*arr[n-1]+1;
        c1=c1-(2*arr[n-1]+1);
        int f=1;
        for(i=n-2;i>=0;i--)
        {
            ll temp=arr[i]+1;
            if(c1-temp>=0)
            {
                c+=arr[i]+1;
                c1-=arr[i]+1;
            }
            else if(c1-1==0)
            {
                c+=arr[i]+1;
                c1=0;
            }
            else
            {
                f=0;
                break;
            }

        }
        if(f==1)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}

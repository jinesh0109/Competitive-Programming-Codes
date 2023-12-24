#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,l,r,k,i;
        cin>>n>>l>>r>>k;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll sum=0,c=0;
        i=0;
        while(i<n)
        {
            if(arr[i]>=l && arr[i]<=r)
            {
                sum+=arr[i];
                if(sum<=k)
                {
                    c++;
                }
            }


            if(sum>k){
                break;
            }
            i++;
        }
        cout<<c<<endl;
    }
}

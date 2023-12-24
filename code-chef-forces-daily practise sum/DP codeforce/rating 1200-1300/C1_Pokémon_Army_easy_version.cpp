#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q,i;
        cin>>n>>q;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        {
            cout<<arr[0]<<endl;
            continue;
        }
        ll sum=0,peak=1,down=0;
        for(i=1;i<n;i++)
        {
            if(peak==1 && arr[i-1]>arr[i])
            {
                peak=0;
                sum+=arr[i-1];
                //cout<<sum<<" "<<i<<endl;
                down=1;
            }
            if(down==1 && arr[i]>arr[i-1])
            {
                down=0;
                sum-=arr[i-1];
                //cout<<sum<<" "<<i<<endl;
                peak=1;
            }
        }
        if(peak==1 && arr[n-1]>arr[n-2])
        {
            sum+=arr[n-1];
        }
        cout<<sum<<endl;

    }
}
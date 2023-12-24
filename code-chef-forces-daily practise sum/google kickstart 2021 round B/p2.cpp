#include<bits/stdc++.h>
#define ll long lont int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        ll n,i;
        cin>>n;
        ll arr[n],arr1[n-1];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i>0)
            {
                arr1[i-1]=arr[i-1]-arr[i];
            }

        }
        ll max_l=1,c=0;
        for(i=0;i<n-1;i++)
        {
            ll temp=arr1[i];
            if(arr[i-1]+arr[i+1]%2==0)
            {
                 arr[i]=(arr[i-1]+arr[i+1])/2;
            }
            c=1;
            for(j=1;j<n;j++)
            {
                if()
            }
        }


    }
}

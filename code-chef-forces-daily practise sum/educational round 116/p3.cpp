#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i;
        cin>>n>>k;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll sum=0;
        k++;
        for(i=0;i<n;i++)
        {
            if(i!=n-1)
            {
                if(k>0)
                {

                ll temp=pow(10,arr[i+1]-arr[i])-1;
                sum+=pow(10,arr[i])*(min(k,temp));
                //cout<<sum<<endl;
                ll temp1=min(k,temp);
                k-=temp1;
                }

            }
        }
        if(k>=0)
            sum+=pow(10,arr[n-1])*k;
        cout<<sum<<endl;
    }
}

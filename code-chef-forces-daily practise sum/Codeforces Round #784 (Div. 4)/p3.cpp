#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        ll temp=1,temp1=1;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int f=1;
        if(arr[0]%2==0)
        {
            temp=0;
            for(i=1;i<n;i++)
            {
                if(i%2==0)
                {
                    if(arr[i]%2==1)
                    {
                        cout<<"NO\n";
                        f=0;
                        break;
                    }
                }
            }
        }
        else{
            temp=0;
            for(i=1;i<n;i++)
            {
                if(i%2==0)
                {
                    if(arr[i]%2==0)
                    {
                        cout<<"NO\n";
                        f=0;
                        break;
                    }
                }
            }
        }
        if(f==0)
            continue;
        if(arr[1]%2==0)
        {
            temp=0;
            for(i=1;i<n;i++)
            {
                if(i%2==1)
                {
                    if(arr[i]%2==1)
                    {
                        cout<<"NO\n";
                        f=0;
                        break;
                    }
                }
            }
        }
        else{
            temp=0;
            for(i=1;i<n;i++)
            {
                if(i%2==1)
                {
                    if(arr[i]%2==0)
                    {
                        cout<<"NO\n";
                        f=0;
                        break;
                    }
                }
            }
        }
        if(f==0)
            continue;
        cout<<"YES\n";
    }
}



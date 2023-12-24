#include<bits/stdc++.h>
#define ll long long int

using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n],min1=10000000000,minindex=n+1;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<min1)
            {
                min1=arr[i];
                minindex=i;
            }
        }
        cout<<n-1<<endl;
        if(minindex%2==0)
        {
            ll x,y;
            for(i=0;i<n;i++)
            {
                if(i!=minindex)
                {
                    if(i%2==0)
                    {
                         x=min1;
                         y=min1;
                    }
                    else{
                         x=min1+1;
                         y=min1;
                    }
                    cout<<i+1<<" "<<minindex+1<<" "<<x<<" "<<y<<endl;
                }

            }
        }
        else{
            ll x,y;
            for(i=0;i<n;i++)
            {
                if(i!=minindex)
                {
                    if(i%2==0)
                    {
                         x=min1+1;
                         y=min1;
                    }
                    else{
                         x=min1;
                         y=min1;
                    }
                    cout<<i+1<<" "<<minindex+1<<" "<<x<<" "<<y<<endl;
                }

            }
        }



    }
}

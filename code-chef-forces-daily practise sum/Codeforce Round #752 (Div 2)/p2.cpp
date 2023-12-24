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
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n%2==0)
        {
            cout<<"YES\n";
        }
        else{
            ll flag=1;
            for(i=1;i<n;i++)
            {
                if(arr[i]<=arr[i-1])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }

    }
}

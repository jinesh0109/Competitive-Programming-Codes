#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll sieve[1000001]={0};

void pre_compute()
{
   sieve[1]=1;
   for(ll i=2;i*i<=1000001;i++)
   {
      if(sieve[i]==0)
      {
         sieve[i]=i;
         for(ll j=i*i;j<=1000001;j+=i)
            sieve[j]=i;

      }
   }
   for(ll i=1;i<=1000001;i++)
   {
      if(sieve[i]==0)
         sieve[i]=i;
   }
}
int main()
{
    pre_compute();
    ll n,i;
    cin>>n;
    ll arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cout<<"NO\n";
            continue;
        }
        ll ans=sqrt(arr[i]);
        if(ans*ans==arr[i])
        {
            if(sieve[ans]==ans)
            {
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }

        }
        else{
            cout<<"NO\n";
        }
    }

}

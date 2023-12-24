#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define ss second

const long long int mod = 998244353;

using namespace std;

ll sieve[10000005]={0};

void pre_compute()
{
   sieve[1]=1;
   for(ll i=2;i*i<=10000005;i++)
   {
      if(sieve[i]==0)
      {
         sieve[i]=i;
         for(ll j=i*i;j<=10000005;j+=i)
            sieve[j]=i;

      }
   }
   for(ll i=1;i<=10000005;i++)
   {
      if(sieve[i]==0)
         sieve[i]=i;
   }
}


ll arr[1000005]={0};
void sum()
{
    arr[1]=1;
    ll sum=arr[1];
    for(ll i=2;i<=1000000;i++)
    {
        ll j=i;
        map<ll,ll>m;
        while(sieve[j]!=1)
        {
            m[sieve[j]]++;
            j/=sieve[j];
        }
        ll sum1=1;
        for(auto x : m)
        {
            sum1*=(x.ss+1);
        }
        arr[i]+=(sum1)%mod;
        arr[i]=(arr[i]+sum)%mod;
        sum=(sum+arr[i])%mod;
    }
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
	ll test = 1;
	pre_compute();
	sum();

	while(test--)
	{
	    ll n;
	    cin>>n;
	    cout<<arr[n]<<endl;

	}
	return 0;
}

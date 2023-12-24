#include<bits/stdc++.h>
#include<vector>
#define ll long long int
using namespace std;

vector<ll> FindPrime(ll n)
{
     vector<ll> v;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (ll p = 2; p <= n; p++)
        if (prime[p])
            v.push_back(p);
    return v;
}
int main()
{


    ll t;
    cin>>t;
    vector<ll> v1;
    v1=FindPrime(sqrt(10e10));
    for(ll tt=1;tt<=t;tt++)
    {
        ll z,i;
        cin>>z;

        ll max1=0;
        for(i=0;i<v1.size()-1;i++)
        {
            if(v1[i]*v1[i+1]<=z)
            {
                max1=v1[i]*v1[i+1];
            }

        }
        cout<<"Case #"<<tt<<": "<<max1<<endl;


    }
}

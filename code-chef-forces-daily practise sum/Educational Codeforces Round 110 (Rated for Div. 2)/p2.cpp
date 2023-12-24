#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        ll arr[n];
        vector<ll>even;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                even.push_back(arr[i]);
            }
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==1)
            {
                even.push_back(arr[i]);
            }
        }


        ll sum=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(gcd(even[i],2*even[j])>1)
                    sum++;
            }
        }
        cout<<sum<<endl;
    }
}

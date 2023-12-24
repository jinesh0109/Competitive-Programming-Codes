#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,z,i;
        cin>>n>>k>>z;
        ll arr[n],sum=0,sum1=0,maxpair=0,temp;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<=k;i++)
        {
            sum+=arr[i];
            maxpair=max(maxpair,arr[i]+arr[i+1]);
            temp=min((k-i)/2,z);
            sum1=max(sum1,temp*maxpair+sum);
        }
        cout<<sum1<<endl;
}
}

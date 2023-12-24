#include<bits/stdc++.h>
using namespace std;
#define ll long long int


const ll N = 4e6+5;
ll prime[N];
ll value[N]={0};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j;
    for(i=1;i<N;i++)
    {
        prime[i]=i;
     }
    for(i=2;i<N;i++)
    {
        if(prime[i]==i)
        {
            prime[i]=i-1;
            for(j=2*i;j<N;j+=i)
            {
                prime[j]=(prime[j]/i)*(i-1);
            }
        }
    }
    for(i=1;i<=N;i++)
    {
        value[i]=value[i]+i-1;
        for(j=2*i;j<N;j+=i)
        {
            ll t1=((1+prime[j/i])/2);
            value[j]+=i*t1;
        }
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll k;
        cin>>k;
        //for(i=1;i<=4*k+1;i++)
        //{
        //    cout<<prime[i]<<" ";
        //}
        //cout<<"\n";
        //for(i=1;i<=4*k+1;i++)
        //{
        //    cout<<value[i]<<" ";
        //}
        //cout<<"\n";
        cout<<value[4*k+1]<<endl;

    }
}

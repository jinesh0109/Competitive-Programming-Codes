#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define F(i,a,b) for(long long i=a;i<b;i++)
#define pb push_back
#define ff first
#define ss second
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define pll pair<ll, ll>

const int mod = 1e9 + 7;
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;


#define ordered_set tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>

ll dp[1005][20005];
ll func(vector<ll>&c,vector<ll>&d,ll i,ll cap)
{
    if(i==c.size())
        return 0;
    if(dp[i][cap]!=-1)
        return dp[i][cap];
    if(cap>=d[i])
        return dp[i][cap]=max(c[i]+func(c,d,i+1,cap-d[i]),func(c,d,i+1,cap));
    else
        return dp[i][cap]=func(c,d,i+1,cap);
}

ll dp1[1005];
void pre(ll n)
{
    dp1[1]=0;
    dp1[2]=1;
    F(i,2,n)
    {
        F(j,1,i+1)
        {
            dp1[i+i/j]=min(dp1[i+i/j],dp1[i]+1);
        }
    }
}
int main()
{

   ll test = 1;
   cin>>test;
   F(i,0,1005)
    dp1[i]=LONG_MAX;
  pre(1004);
    for(int i=0;i<=10;i++)
    {
        cout<<dp1[i]<<" ";
    }
   while(test--)
   {
        ll n,k;
        cin>>n>>k;
        vector<ll>b(n),c(n),d(n);
        ll sum=0,ans=0;
        vector<pair<ll,ll>>vp;
        F(i,0,n)
        {
            cin>>b[i];
            d[i]=dp1[b[i]];
            sum+=d[i];
           // cout<<d[i]<<" ";
        }
        F(i,0,n)
            cin>>c[i],ans+=c[i];
        if(sum<=k)
        {
            cout<<ans<<endl;continue;
        }
        F(i,0,n+3)
        {
            F(j,0,k+3)
                dp[i][j]=-1;
        }
        cout<<func(c,d,0,k)<<endl;
   }
   return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[200005][32];
ll i,j;

void precalculate()
{
   for(i=0;i<200005;i++)
   {
       for(j=0;j<32;j++)
       {
            dp[i][j]=0;
       }
   }

   for(i=1;i<200005;i++)
   {
       j=0;
       ll i1=i;
       while(i1)
       {
           dp[i][j++]=i1%2;
           i1/=2;
       }
   }
   for(i=1;i<200005;i++)
   {
       for(j=0;j<32;j++)
       {
           dp[i][j]+=dp[i-1][j];
       }
   }
}

int main()
{
    precalculate();
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r,i,ans=0;
        cin>>l>>r;


       for(i=0;i<32;i++)
       {
           ans=max(ans,dp[r][i] - dp[l-1][i]);
       }
       cout<<r-l+1-ans<<endl;
   }
   return 0;
}



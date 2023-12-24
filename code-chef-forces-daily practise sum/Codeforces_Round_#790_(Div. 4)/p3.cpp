#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,m,i;
        cin>>n>>m;
        string s[n];
        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }
        ll ans=INT_MAX;
        for(i=0;i<n-1;i++)
        {
            
            for(int j=i+1;j<n;j++)
            {
                ll temp1=0;
                for(int k=0;k<m;k++)
                {
                    if(s[i][k]!=s[j][k])
                    {
                        temp1+=abs(s[i][k]-s[j][k]);
                    }
                }
                ans=min(ans,temp1);
            }
        }
        cout<<ans<<endl;
        

    }
}
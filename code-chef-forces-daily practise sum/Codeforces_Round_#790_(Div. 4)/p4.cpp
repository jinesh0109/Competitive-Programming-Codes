#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j;
        cin>>n>>m;
        ll arr[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        ll ans=0,k,l;
        for(i=0;i<n;i++)
        {
            
            for(j=0;j<m;j++)
            {
                ll temp=0;    
                ll m1=j;
                for(k=i;k<n&&m1<m;k++)
                {
                    temp+=arr[k][m1];
                    m1++;
                }
                m1=j-1;
                for(k=i-1;k>=0&&m1>=0;k--)
                {
                    temp+=arr[k][m1];
                    m1--;
                }
                m1=j+1;
                for(k=i-1;k>=0&&m1<m;k--)
                {
                    temp+=arr[k][m1];
                    m1++;
                }
                m1=j-1;
                for(k=i+1;k<n&&m1>=0;k++)
                {
                    temp+=arr[k][m1];
                    m1--;
                }
                // cout<<temp<<endl;
                ans=max(ans,temp);
            }
            
        }
        cout<<ans<<endl;
    }
}
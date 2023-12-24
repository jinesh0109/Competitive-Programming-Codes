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
        ll ans1=-10000000000;
        ll i1,j1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {

                cin>>arr[i][j];
                if(arr[i][j]>ans1)
                {
                    ans1=arr[i][j];
                    i1=i;
                    j1=j;
                }
            }

        }
        ll h1=max(n-i1,i1+1);
        ll w1=max(m-j1,j1+1);
        cout<<h1*w1<<endl;
    }
}

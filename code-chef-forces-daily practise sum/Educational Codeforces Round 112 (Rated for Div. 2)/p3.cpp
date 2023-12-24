#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,m;
        cin>>m;
        ll arr[2][m];
        ll fsum[m]={0},ssum[m]={0};
        ll sum1=0,sum2=0;
        for(i=0;i<2;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>arr[i][j];
                if(i==0)
                {
                    sum1+=arr[i][j];
                    fsum[j]=sum1;
                }
                if(i==1)
                {
                    sum2+=arr[i][j];
                    ssum[j]=sum2;
                }
            }
        }
        ll ans=1000000000;
        for(i=0;i<m;i++)
        {
            ll add1=fsum[i];
            ll add2;
            if(i==0)
            {
                add2=ssum[m-1];
            }
            else{
                add2=ssum[m-1]-ssum[i-1];
            }
            ll add11,add22,add111,add222;
            add11=fsum[m-1]-add1;
            add22=0;
            if(i==0)
            {
                add111=0;
            }
            else{
                add111=ssum[i-1];
            }
            add222=0;
            ll min1=max(add11,add111);
            ans=min(ans,min1);

        }
        cout<<ans<<endl;
    }
}


#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,m=10000000000,i,flag=1,ans;
        cin>>n>>k;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<=k)
            {
                if(k%arr[i]==0)
                {
                    if((k/arr[i]-1)<m)
                    {
                        m=(k/arr[i])-1;
                        ans=arr[i];
                        flag=0;
                    }

                }
            }
        }
        if(flag==0)
            cout<<ans<<endl;
        else
            cout<<"-1\n";
    }
}

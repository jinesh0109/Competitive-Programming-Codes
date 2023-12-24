#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        ll n,a,b,i,j;
        cin>>n>>a>>b;
        ll arr[n],arr1[n],index=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>0)
                index=i+1;
        }
        int flag=1;
        for(i=index+1;i<=100;i++)
        {
           // cout<<"flag "<<flag<<endl;
            //cout<<"i values "<<i<<endl;

            flag=1;
            ll arr2[i];
            arr2[i-1]=1;
            arr2[i-2]=1;
            for(j=i-2;j>=0;j--)
            {
                if(j+1<=n)
                {
                    if(arr2[j]<arr[j])
                    {
                        flag=0;
                        break;
                    }
                    arr2[j]=arr2[j]-arr[j];

                }
                arr2[j-1]=arr2[j]+arr2[j+1];
            }
            if(flag==1)
            {
                cout<<"Case #"<<tt<<": "<<i<<endl;
                break;
            }
        }
        if(flag!=1)
        {
            cout<<"Case #"<<tt<<": "<<"IMPOSSIBLE\n";
        }
    }
}

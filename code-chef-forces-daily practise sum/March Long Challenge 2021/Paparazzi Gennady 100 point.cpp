#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        double arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll ans=1;
        i=0;
        while(i<n-1)
        {
            double slope=-1e16,slope1=-1e16,slope2=-1e16;


            ll temp=0;
            for(j=i+1;j<n;j++)
            {
                slope1=(arr[j]-arr[i])/(j-i);
                if(slope1>=slope)
                {
                    slope=slope1;
                    //cout<<i<<" "<<j<<" "<<arr[i]<<" "<<arr[j]<<endl;
                    temp=j;
                }
            }
            ans=max(ans,temp-i);
            i=temp;
        }
        cout<<ans<<endl;
    }
}

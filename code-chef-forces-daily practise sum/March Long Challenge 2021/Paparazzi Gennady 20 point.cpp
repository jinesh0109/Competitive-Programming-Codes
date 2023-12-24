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
        ll max1=-1e16;
        for(i=0;i<n-1;i++)
        {
            double slope=-1e16,slope1;
            ll diff=0;
            for(j=i+1;j<n;j++)
            {
                slope1=(arr[j]-arr[i])/(double(j)-double(i));
                if(slope1>=slope)
                {
                    slope=slope1;

                    diff=max(diff,j-i);
                }
            }
            max1=max(max1,diff);
        }
        cout<<max1<<endl;
    }
}

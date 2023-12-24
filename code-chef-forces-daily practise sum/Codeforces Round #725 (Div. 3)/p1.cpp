#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        ll max1,min1;
        for(i=0;i<n;i++)
        {
             ll temp;
             cin>>temp;
             if(temp==1)
                min1=i;
             if(temp==n)
                max1=i;
        }
        ll ans;
        if(min1>max1)
        {
            ans=min(min1+1,min(n-max1,max1+1+n-min1));
        }
        else{
             ans=min(max1+1,min(n-min1,min1+1+n-max1));
        }
        cout<<ans<<endl;

    }
}

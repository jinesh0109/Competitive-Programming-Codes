#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n ,i;
        cin>>n;
        ll arr[n],max1=-1,temp;
        ll ans=-1;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>max1)
            {
                max1=arr[i];
                temp=i;
            }

        }
        for(i=temp;i<n;i++)
        {
            if(i==0)
            {
                if(max1!=arr[i+1])
                {
                    ans=i+1;
                    break;
                }
            }
            else if(i==n-1)
            {
                if(max1!=arr[i-1])
                {
                    ans=i+1;
                    break;
                }
            }
            else{
                if(max1!=arr[i+1] || max1!=arr[i-1])
                {
                    ans=i+1;
                    break;
                }
            }

        }
        cout<<ans<<endl;
    }
}


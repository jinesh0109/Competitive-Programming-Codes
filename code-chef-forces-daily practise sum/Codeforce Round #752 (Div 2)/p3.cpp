#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,temp=21;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll ind=min(temp,n);
        int flag,f=1;
        for(i=ind-1;i>=0;i--)
        {
            flag=1;
            for(j=i;j>=0;j--)
            {
                if(arr[i]%(j+2)!=0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                f=0;
                break;
            }
        }
        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}

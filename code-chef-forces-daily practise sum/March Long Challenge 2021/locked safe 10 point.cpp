#include<bits/stdc++.h>
#include<map>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];

        for(i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        ll diff=0,c=0,temp=0,j=1;
        for(i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                j=j+1;
            }
            else{
                c+=(j*(j-1))/2;
                j=1;

            }
        }
        c+=(j*(j-1))/2;

        ll ans;
        ans=((n*(n-1))/2)-c;
        cout<<ans<<endl;

    }
}

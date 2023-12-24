#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,i,x1;
        cin>>n>>x;

        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);

        ll m=arr[n-1],c=0,ans=0;
        for(i=n-1;i>=0;i--)
        {
            c++;
            if(arr[i]<m)
                m=arr[i];
            if(c*m>=x)
            {
                c=0;
                ans++;
                if(i!=0)
                {
                    m=arr[i-1];
                }
            }
        }
        cout<<ans<<endl;

    }
}

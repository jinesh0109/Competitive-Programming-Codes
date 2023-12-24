#include<bits/stdc++.h>
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
        ll arr[n+2];
        for(i=0;i<n+2;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n+2);
        ll sum=0;
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        if(sum==arr[n]||sum==arr[n+1])
        {
            for(i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
            continue;
        }
        int flag=1,temp;
        sum+=arr[n];
        for(i=0;i<n+1;i++)
        {
            if(sum-arr[i]==arr[n+1])
            {
                temp=i;
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"-1\n";
        }
        else{
            for(i=0;i<n+1;i++)
            {
                if(i!=temp)
                {
                    cout<<arr[i]<<" " ;
                }
            }
            cout<<"\n";
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n],arr1[n];
        ll max1=0,ind=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>max1){
                max1=arr[i];
                ind=i;
            }
        }
        for(i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        int diff=max1-arr1[ind];
        if(diff<0)
        {
            cout<<"NO\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            
            arr[i]=arr[i]-diff;
            if(arr[i]<0)
                arr[i]=0;
        }
        int f=1;
        for(i=0;i<n;i++)
        {
            if(arr[i]!=arr1[i])
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
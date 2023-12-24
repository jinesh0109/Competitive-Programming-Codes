#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
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
        sort(arr,arr+n);
        ll min1=10000000000,minind;
        for(i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]<min1)
            {
                min1=arr[i+1]-arr[i];
                minind=i;
            }
        }
        cout<<arr[minind]<<" ";
        for(i=minind+2;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        for(i=0;i<minind;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<arr[minind+1]<<endl;
    }
}

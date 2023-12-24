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
        ll arr[n],arr1[n],arr2[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        arr2[0]=arr1[0]-arr[0];
        for(i=1;i<n;i++)
        {
            if(arr1[i-1]>=arr[i])
            {
                arr2[i]=arr1[i]-arr1[i-1];
            }
            else{
                arr2[i]=arr1[i]-arr[i];
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<arr2[i]<<" ";
        }
        cout<<"\n";
    }
}
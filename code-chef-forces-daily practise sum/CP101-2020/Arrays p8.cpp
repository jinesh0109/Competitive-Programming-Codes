#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n1,n2,i,j;
    cin>>n1>>n2;
    ll k,m;
    cin>>k>>m;
    ll arr[n1],arr1[n2];
    for(i=0;i<n1;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n2;i++)cin>>arr1[i];
    if(arr[k-1]<arr1[n2-m])
    {
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,i;
    cin>>n;
    ll arr[n],arr1[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        arr1[i]=0;
    }
    ll c=0;
    sort(arr,arr+n);
    ll right=n-1,left=n-2;
    for(i=n-2;i>=0;i--)
    {
        if(right>left && arr1[left]=0)
        {
            c++;
            arr1[left]=1
        }
    }
}

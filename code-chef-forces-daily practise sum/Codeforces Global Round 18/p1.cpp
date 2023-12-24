#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,i;
    cin>>n;
    ll arr[n],sum=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%n==0)
    {
        cout<<"0\n";
    }
    else{
        cout<<"1\n";
    }
    }


}

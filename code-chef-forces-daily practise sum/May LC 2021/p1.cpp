#include<bits/stdc++.h>
#define ll long long int
#define M 1000000007
using namespace std;
int main()
{
    ll t;
    ll arr[100001];
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    ll ans=2,i;
    for(i=3;i<100001;i++)
    {
        ans=(ans*2)%M;
        arr[i]=ans;
    }
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<arr[n]<<endl;
    }
}



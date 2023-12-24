#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll f=0,f1=1;
    if(n==1)
    {
        cout<<"Dead\n";
        return 0;
    }
    else if(n==2)
    {
        cout<<"Alive\n";
        return 0;
    }
    ll i,ans=0;
    for(i=3;i<=n;i++)
    {
        ans=f+f1;
        f=f1;
        f1=ans;
    }
    if(ans%2==0)
    {
        cout<<"Dead\n";
    }
    else{
        cout<<"Alive\n";
    }
}

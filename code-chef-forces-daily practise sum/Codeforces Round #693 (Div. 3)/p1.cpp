#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h;
        cin>>w>>h;
        ll n;
        cin>>n;
        ll ans=1;
        while(w%2==0)
        {

            ans*=2;
            w=w/2;
        }
        while(h%2==0)
        {

            ans*=2;
            h=h/2;
        }
        if(ans>=n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}

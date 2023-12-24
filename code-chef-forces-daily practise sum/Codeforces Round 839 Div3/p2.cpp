#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll a11,a12,a21,a22;
        cin>>a11>>a12>>a21>>a22;
        if(a11<a12 && a11<a21 && a12<a22 && a21<a22)
        {
            cout<<"YES\n";
        }
        else if(a12<a22 && a12<a11 && a22<a21 && a11<a21)
        {
            cout<<"YES\n";
        }
        else if(a22<a21 && a22<a12 && a21<a11 && a12<a11)
        {
            cout<<"YES\n";
        }
        else if(a21<a11 && a21<a22 && a11<a12 && a22<a12)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
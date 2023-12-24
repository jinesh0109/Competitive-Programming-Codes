#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if(s.size()==1)
        {
            cout<<"YES\n";
            continue;
        }
        if(s=="00" || s=="11")
        {
            cout<<"NO\n";
            continue;
        }
        else if(s=="01" || s=="10")
        {
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";


    }
}

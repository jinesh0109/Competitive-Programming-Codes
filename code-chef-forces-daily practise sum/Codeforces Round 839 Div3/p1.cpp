#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans;
        ans=(s[0]-48)+(s[2]-48);
        cout<<ans<<"\n";
    }
}
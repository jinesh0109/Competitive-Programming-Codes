#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        string s;
        cin>>s;
        int flag=1;
        if(s.substr(0,4)=="2020" || s.substr(n-4)=="2020")
        {
            cout<<"YES\n";
            flag=0;
            continue;
        }
        if((s[0]=='2' && s[n-1]=='0') && (s[n-2]=='2' && s[n-3]=='0'))
        {
            cout<<"YES\n";
            flag=0;
            continue;
        }
        if((s[0]=='2' && s[1]=='0' )&& (s[n-2]=='2' && s[n-1]=='0'))
        {
            cout<<"YES\n";
            flag=0;
            continue;
        }
        if((s[0]=='2' && s[1]=='0') && (s[2]=='2' && s[n-1]=='0'))
        {
            cout<<"YES\n";
            flag=0;
            continue;
        }
        if(flag==1)
        {
            cout<<"NO\n";
        }
    }
}

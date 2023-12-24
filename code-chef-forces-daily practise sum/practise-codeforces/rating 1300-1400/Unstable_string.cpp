#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        ll i,n;
        cin>>s;
        n=s.size();
        string s1,s2;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
                s1+='1';
            else
                s1+='0';
            if(i%2==0)
                s2+='0';
            else
                s2+='1';
        }
        ll ans=0,c=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='?'||s[i]==s1[i])
            {
                c++;
                ans+=c;
            }
            else
                c=0;
        }
        c=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='?'||s[i]==s2[i])
            {
                c++;
                ans+=c;
            }
            else
                c=0;
        }
        c=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='?')
            {
                c++;
                ans-=c;
            }
            else
                c=0;
        }
        cout<<ans<<endl;
    }
}

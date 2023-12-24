#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        string s,s1;
        cin>>s>>s1;
        if(s==s1)
        {
            cout<<"0\n";
            continue;
        }
        ll c=0,c1=0;
        ll c00=0,c11=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                c++;
            if(s[i]=='1')
                c1++;
        }
        for(i=0;i<n;i++)
        {
            if(s1[i]=='0')
                c00++;
            if(s1[i]=='1')
                c11++;
        }

        ll notequal=0,eq=0;
        for(i=0;i<n;i++)
        {
            if(s[i]!=s1[i])
            {
                notequal++;
            }
            else{
                eq++;
            }
        }

        if(c1!=c11 && (n-c1+1)!=c11)
        {
            cout<<"-1\n";
            continue;
        }
        ll ans=LONG_MAX;
       if(c1==c11)
       {
           ll c12=0,c2=0;
            ll ans1=0;
           for(i=0;i<n;i++)
           {
                if(s[i]!=s1[i]&&s[i]=='1')
                    ans1++,c12++;
                if(s[i]!=s1[i]&&s1[i]=='1')
                    ans1++,c2++;
           }
            if(c12==c2)
                ans=min(ans,ans1);
       }
       if(n-c1+1==c11)
       {
           bool ok=true;
           for(i=0;i<n;i++)
           {
               if(s[i]=='1'&&s[i]==s1[i]&&ok)
               {
                   ok=false;
               }
                else
                    s[i]=1-(s[i]-'0')+'0';
           }
           ll c12=0,c2=0;
               ll ans1=0;
           for(i=0;i<n;i++)
           {
                if(s[i]!=s1[i]&&s[i]=='1')
                    ans1++,c12++;
                if(s[i]!=s1[i]&&s1[i]=='1')
                    ans1++,c2++;
           }
            if(c12==c2)
                ans=min(ans,ans1+1);
       }
       cout<<ans<<endl;



    }
}

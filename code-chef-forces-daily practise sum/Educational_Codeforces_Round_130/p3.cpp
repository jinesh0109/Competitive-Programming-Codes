#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        string s,t;
        cin>>s>>t;
        map<char,set<ll> > m;
        for(i=0;i<n;i++)        
        {
            m[s[i]].insert(i);
        }
        int f=1;
        for(i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            {
                if(s[i]=='a' && t[i]=='b')
                {
                    if(m['b'].size()==0)
                    {
                        f=0;
                        break;
                    }
                    if(m['c'].size()>0 && *m['c'].begin()<*m['b'].begin())
                    {    
                        f=0;
                        break;
                    }
                    else{
                        int in=*m['b'].begin();
                        m['a'].insert(in);
                        m['b'].erase(m['b'].begin());
                        s[in]='a';
                    }
                }
                else if(s[i]=='b' && t[i]=='c')
                {
                    if(m['c'].size()==0)
                    {
                        f=0;
                        break;
                    }
                    if(m['a'].size()>0 && *m['a'].begin()<*m['c'].begin())
                    {    
                        f=0;
                        break;
                    }
                    else{
                        int in=*m['c'].begin();
                        m['b'].insert(in);
                        m['c'].erase(m['c'].begin());
                        s[in]='b';
                    }
                }
                else{
                    f=0;
                    break;
                }
            }
            m[s[i]].erase(m[s[i]].begin());
        }
        if(f==1)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
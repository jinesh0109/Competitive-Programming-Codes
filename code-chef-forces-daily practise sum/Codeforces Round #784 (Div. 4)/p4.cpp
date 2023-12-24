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
        string s;
        cin>>s;
        int f=1;
        for(i=1;i<n-1;i++)
        {
            if(s[i]=='R' || s[i]=='B')
            {
                if(s[i-1]=='W' && s[i+1]=='W')
                {
                    cout<<"NO\n";
                    f=0;
                    break;
                }

            }
        }
        if(f==0)
            continue;
        ll cr=0,cb=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='W')
            {
                if(cr>0 && cb==0)
                {
                    cout<<"NO\n";
                    f=0;
                    break;
                }
                else if(cb>0 && cr==0)
                {
                    cout<<"NO\n";
                    f=0;
                    break;
                }
                else
                {
                     cr=0;
                     cb=0;
                }
            }
            else if(s[i]=='B')
                cb++;
            else
                cr++;
        }
        if(f==0)
            continue;
        if(cr>0 && cb==0)
                {
                    cout<<"NO\n";
                    f=0;

                }
                else if(cb>0 && cr==0)
                {
                    cout<<"NO\n";
                    f=0;

                }
        if(f==0)
            continue;
        cout<<"YES\n";

    }
}

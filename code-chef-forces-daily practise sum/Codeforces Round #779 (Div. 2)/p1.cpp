#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
    ll ans=0;
    for(i=0;i<n-1;i++)
    {
        if(s[i]=='0')
        {
            if(i<=n-2 && s[i+1]=='0')
            {
                ans+=2;
            }
            else if(s[i+1]=='1')
            {
                if(i<=n-3 && s[i+2]=='0')
                {
                    ans+=1;
                }

            }
        }
    }
    cout<<ans<<endl;
    }

}

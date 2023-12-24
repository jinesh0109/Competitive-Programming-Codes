#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j;
        cin>>n>>m;
        string s;
        cin>>s;
        
        for(j=0;j<m;j++)
        {
            string s1;
            s1=s;
            for(i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                    if(i==0)
                    {
                        if(s[i+1]=='1')
                        {
                            s1[i]='1';
                        }
                    }
                    else if(i==n-1)
                    {
                        if(s[n-2]=='1')
                        {
                            s1[i]='1';
                        }
                    }
                    else{
                        if((s[i-1]=='1' && s[i+1]=='0') || (s[i-1]=='0' && s[i+1]=='1') )
                        {
                            s1[i]='1';
                        }
                    }
                }
            }
            s=s1;
            int flag=1;
            for(i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                    if(i==0)       
                    {
                        if(s[i+1]=='1')
                        {
                            flag=0;
                            break;
                        }
                    }
                    else if(i==n-1)
                    {
                        if(s[n-2]=='1')
                        {
                            flag=0;
                            break;
                        }
                    }
                    else{
                        if((s[i-1]=='1' && s[i+1]=='0') || (s[i-1]=='0' && s[i+1]=='1') )
                        {
                            flag=0;
                            break;
                        }
                    }
                }

            }
            if(flag==1)
            {
                break;
            }

        }
        cout<<s<<endl;
    }
}
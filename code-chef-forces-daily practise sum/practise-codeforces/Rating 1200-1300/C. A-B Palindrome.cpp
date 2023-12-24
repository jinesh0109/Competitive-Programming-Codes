#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a1,b1,i,n;
        cin>>a1>>b1;
        string s;
        cin>>s;
        n=s.size();
        int flag=1,ta=0,tb=0;
        for(i=0;i<s.size()/2;i++)
        {
            if((s[i]=='1' && s[n-i-1]=='0') || (s[i]=='0' && s[n-i-1]=='1'))
            {
                flag=0;
                break;
            }

        }
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
                ta++;
            else if(s[i]=='1')
                tb++;
        }
        if(ta>a1 || tb>b1)
        {
            flag=0;
        }
        if(flag==0)
        {
            cout<<"-1\n";
            continue;
        }
        ll a=a1,b=b1,tc=n,flag1=1;
        for(i=0;i<s.size()/2;i++)
        {
            if(tc>=2)
            {
                if(s[i]=='1')
                {
                    if(s[n-i-1]=='?')
                    {
                        s[n-i-1]='1';
                    }
                    if(b>=2)
                        b-=2;
                    else
                    {
                        flag1=0;
                        break;
                    }

                    tc-=2;
                }
                if(s[n-i-1]=='1')
                {
                    if(s[i]=='?')
                    {
                        s[i]='1';
                        if(b>=2)
                            b-=2;
                        else
                        {
                            flag1=0;
                            break;
                        }
                        tc-=2;
                    }

                }
                if(s[i]=='0')
                {
                    if(s[n-i-1]=='?')
                    {
                        s[n-i-1]='0';
                    }
                    if(a>=2)
                        a-=2;
                    else
                    {
                        flag1=0;
                        break;
                    }
                    tc-=2;
                }
                if(s[n-i-1]=='0')
                {
                    if(s[i]=='?')
                    {
                        s[i]='0';
                        if(a>=2)
                            a-=2;
                        else
                        {
                            flag1=0;
                            break;
                        }
                        tc-=2;
                    }

                }
            }



        }
        //cout<<"a "<<a<<endl;
        //cout<<"b "<<b<<endl;
        if(flag1==0)
        {
            cout<<"-1\n";
            continue;
        }

            for(i=0;i<s.size()/2;i++)
            {
                if(s[i]=='?' && s[n-i-1]=='?')
                {
                    if(a>=2)
                    {
                        s[i]='0';
                        s[n-i-1]='0';
                        a-=2;
                    }
                }
            }
            for(i=0;i<s.size()/2;i++)
            {
                if(s[i]=='?' && s[n-i-1]=='?')
                {
                    if(b>=2)
                    {
                        s[i]='1';
                        s[n-i-1]='1';
                        b-=2;
                    }
                }
            }
            if(n%2==1)
            {
                if(s[n/2]=='?')
                {
                    if(a>0)
                    {
                        s[n/2]='0';
                    }
                    else if(b>0)
                    {
                        s[n/2]='1';
                    }
                    else
                    {
                        cout<<"-1\n";
                        continue;
                    }
                }
            }
            int flag2=1;
            ll taa=0,tbb=0;
            for(i=0;i<n;i++)
            {
                if(s[i]=='1')
                {
                    tbb++;
                }
                else if(s[i]=='0')
                {
                    taa++;
                }
                if(s[i]=='?')
                {
                    flag2=0;
                    break;
                }
            }
            if(taa!=a1 || tbb!=b1)
                flag2=0;
            if(flag2==0)
                cout<<"-1\n";
            else{
                for(i=0;i<n;i++)
                {
                    cout<<s[i];
                }
                cout<<"\n";
            }

    }
}

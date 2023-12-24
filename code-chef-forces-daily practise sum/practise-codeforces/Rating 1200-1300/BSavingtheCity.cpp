#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#include<vector>
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,i;
        cin>>a>>b;
        string s;
        cin>>s;
        vector<ll>v,v1;
        int flag=1,flag1=1;
        ll ind=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                if(flag1==1)
                {
                    v1.push_back(i);
                    flag1=0;
                }
                ind=i;
                flag=0;
            }
            else{
                if(flag==0)
                {
                    v.push_back(i-1);
                    flag=1;
                    flag1=1;
                }
            }
        }
        if(v.size()!=v1.size())
        {
            v.push_back(s.size()-1);
        }
        ll sum=0;
        if(v1.size()<1)
        {
            cout<<"0\n";
            continue;
        }
        else if(v1.size()==1)
        {
            cout<<a<<endl;
            continue;
        }
        for(i=0;i<v.size()-1;i++)
        {
            ll diff=v1[i+1]-v[i]-1;
            if(diff*b+a>2*a)
            {
                if(i==v.size()-2)
                {
                    sum+=2*a;
                }
                else{
                    sum+=a;
                }

            }
            else if(diff*b+a<=2*a)
            {
                if(i==v.size()-2)
                {
                    sum+=diff*b+a;
                }
                else{
                    sum+=diff*b;
                }

            }
        }
        cout<<sum<<endl;
    }
}

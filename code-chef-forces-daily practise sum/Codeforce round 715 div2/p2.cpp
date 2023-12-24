#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        string s;
        cin>>s;
        int flag=1;
        ll cT=0,cM=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='T')
            {
                cT++;
            }
            else{
                cM++;
            }
            if(cM>cT)
            {
                flag=0;
                break;
            }

        }
        if(flag==0 || cM*2!=cT)
        {
            cout<<"NO\n";
        }
        else{
            cT=0;
            cM=0;
            flag=1;
            for(i=s.size()-1;i>=0;i--)
            {
                if(s[i]=='T')
                {
                    cT++;
                }
                else{
                    cM++;
                }
                if(cM>cT)
                {
                    flag=0;
                    break;
                }

            }      
            if(flag==1)
            {
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }

        }
    }
}
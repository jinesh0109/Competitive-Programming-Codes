#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        ll i,c0=0,c1=0;
        cin>>s;
        int flag=1;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                c0++;
            else
                c1++;
        }
        ll c=1;
        for(i=0;i<s.size()-1;i++)
        {
            if(s[i]=='0')
            {
                if(s[i+1]=='0')
                {
                    c++;
                    flag=0;
                }
                else{

                    break;
                }
            }
        }
        if(c1==0)
        {
            cout<<"1\n";
        }
        else{
            if(flag==0)
            {
                if(c0==c)
                {
                    cout<<"1\n";
                    continue;
                }
            }
            if(c0>=2)
            {
                cout<<"2\n";
            }
            else if(c0==1)
            {
                cout<<"1\n";
            }
            else{
                cout<<"0\n";
            }
        }
    }


}

#include<bits/stdc++.h>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        string b,b1="",ans="";
        cin>>b;
        if(b[0]=='1')
        {
            b1+='1';
            ans+='2';
        }
        else{
            b1+='1';
            ans+='1';
        }
        for(i=1;i<n;i++)
        {
            if(b[i]=='1')
            {
                if(ans[i-1]=='1')
                {
                    b1+='1';
                    ans+='2';
                }
                else if(ans[i-1]=='2'){
                    b1+='0';
                    ans+='1';
                }
                else if(ans[i-1]=='0')
                {
                    b1+='1';
                    ans+='2';
                }
            }
            else if(b[i]=='0')
            {
                if(ans[i-1]=='1')
                {
                    b1+='0';
                    ans+='0';
                }
                else if(ans[i-1]=='2'){
                    b1+='1';
                    ans+='1';
                }
                else if(ans[i-1]=='0')
                {
                    b1+='1';
                    ans+='1';
                }
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<b1[i];
        }
        cout<<endl;

    }
}

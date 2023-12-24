#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s,a,b="";
        char temp='z';
        cin>>s;
        int flag1=0;

        ll i,ind;
        for(i=0;i<s.size();i++)
        {
            if(s[i]<temp)
            {
                temp=s[i];
            }
        }
        for(i=0;i<s.size();i++)
        {
            if(temp==s[i] && flag1==0)
            {
                flag1=1;
            }
            else{
                b+=s[i];
            }
        }
        cout<<temp<<" "<<b<<endl;
    }
}

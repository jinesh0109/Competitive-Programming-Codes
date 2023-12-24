
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p=0,ans=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                p++;
            else
                p--;
            if(p<0)
                ans=max(ans,abs(p));
        }
        cout<<ans<<endl;
    }
}

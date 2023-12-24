#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,c=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='N')
                c++;
        }
        if(c==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";

    }
}

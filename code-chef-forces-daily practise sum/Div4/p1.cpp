#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int f=1;
        for(int i=0;i<3;i++)
        {
            if(s[0]!='Y' && s[0]!='y')
                f=0;
            if(s[1]!='E' && s[1]!='e')
                f=0;
            if(s[2]!='s' && s[2]!='S')
                f=0;
        }
        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i;
        string s;
        cin>>s;
        if(s.size()==1)
        {
            cout<<s<<endl;
            continue;
        }
        if(s[0]=='b' && s[s.size()-1]=='b')
        {
            cout<<s<<endl;
        }
        else if(s[0]=='b' && s[s.size()-1]!='b')
        {
            s[0]='a';
            cout<<s<<endl;
        }
        else if(s[0]=='a' && s[s.size()-1]=='a')
        {
            cout<<s<<endl;

        }
        else{
            s[0]='b';
            cout<<s<<endl;
        }
    }
}


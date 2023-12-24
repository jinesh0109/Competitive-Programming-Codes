#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    for(int j1=1;j1<=t;j1++)
    {
        string s,p;
        cin>>s>>p;
        int i;
        string s1="";
        if(p.size()<s.size())
        {
            cout<<"Case #"<<j1<<": "<<"IMPOSSIBLE\n";
            continue;
        }
        else if(p.size()==s.size())
        {
            if(s==p)
            {
                cout<<"Case #"<<j1<<": "<<"0\n";
                continue;
            }
            else{
                cout<<"Case #"<<j1<<": "<<"IMPOSSIBLE\n";
                continue;
            }
        }
        int c=0;
        int j=0;
        i=0;
        while(i<s.size() && j<p.size())
        {
            if(s[i]!=p[j])
            {
                j++;
                c++;
            }
            else{
                s1+=s[i];
                j++;
                i++;
            }
        }
        if(s1==s)
        {
            cout<<"Case #"<<j1<<": "<<p.size()-s1.size()<<endl;
        }
        else{
            cout<<"Case #"<<j1<<": "<<"IMPOSSIBLE\n";
        }


    }
}

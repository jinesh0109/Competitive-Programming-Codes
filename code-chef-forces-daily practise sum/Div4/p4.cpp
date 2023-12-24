
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        set<string> s1;
        vector<string> s;
        for(i=0;i<n;i++)
        {
            string s2;
            cin>>s2;
            s.push_back(s2);
            s1.insert(s2);
        }
        string s11="";
        for(i=0;i<n;i++)
        {
            string t1,t2;
            int f1=1;
            for(int j=0;j<s[i].size()-1;j++)
            {
                t1=s[i].substr(0,j+1);
                t2=s[i].substr(j+1);
                //cout<<t1<<" "<<t2<<endl;
                if(s1.find(t1)!=s1.end() && s1.find(t2)!=s1.end())
                {
                    s11+='1';
                    f1=0;
                    break;
                }

            }
            if(f1==1)
                s11+='0';

        }
        cout<<s11<<endl;

    }
}

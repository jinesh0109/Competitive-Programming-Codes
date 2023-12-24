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
        int i,c0=0,c1=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                c1++;
            else
                c0++;
        }
        if(c1>c0)
        {
            cout<<c0<<endl;
        }
        else if(c0>c1)
        {
            cout<<c1<<endl;
        }
        else{
            cout<<c1-1<<endl;
        }
    }
}

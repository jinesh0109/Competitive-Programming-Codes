#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j;
    cin>>n>>t;
    string s,s1;
    cin>>s;
    s1=s;
    for(i=0;i<t;i++)
    {
        for(j=1;j<s.size();j++)
        {
            if(s[j]=='G' && s[j-1]=='B')
            {
                s1[j]='B';
                s1[j-1]='G';
            }
        }
        s=s1;
    }
    cout<<s1;
}

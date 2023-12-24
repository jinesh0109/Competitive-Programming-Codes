#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    long long int i,c,c1,flag=1;
    if(s==t)
    {
        cout<<"YES";
        return 0;
    }
    for(i=0;i<s.length();i++)
    {
        if(s[i]!=t[i])
        {
            c=i;
            break;
        }
    }

    for(i=s.length()-1;i>c;i--)
    {
        if(s[i]!=t[i])
        {
            c1=i;

            break;
        }
    }

    string s1,s2;
    for(i=c;i<=c1;i++)
    {
        s1+=s[i];
        s2+=t[i];
    }

    reverse(s1.begin(),s1.end());

    if(s1==s2)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}

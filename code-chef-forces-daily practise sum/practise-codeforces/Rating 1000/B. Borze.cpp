#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1="";
    cin>>s;
    int i=0;
    while(i<s.size())
    {
        if(s[i]=='.')
        {
            s1+='0';
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            s1+='1';
            i+=2;
        }
        else{
            s1+='2';
            i+=2;
        }

    }
    cout<<s1;
}

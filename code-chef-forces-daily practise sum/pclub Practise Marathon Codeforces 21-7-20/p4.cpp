#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,c=0,c1=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            c++;
        }
        else{
            c1++;
        }
    }
    if(c==c1 || c>c1)
    {
        for(i=0;i<s.length();i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                cout<<s[i];
            }
            else{
                    s[i]=s[i]+32;
                cout<<s[i];
            }
        }
    }
    else
    {
        for(i=0;i<s.length();i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                s[i]=s[i]-32;
                cout<<s[i];
            }
            else{
                cout<<s[i];
            }
        }
    }

}

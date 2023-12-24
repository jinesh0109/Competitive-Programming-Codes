#include<bits/stdc++.h>
#include<string>
#include<iterator>
#include<map>
using namespace std;
int main()
{
    int k,i;
    string s;
    cin>>k>>s;
    map<char,int>m;
    for(i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    auto it=m.begin();

    for(it=m.begin();it!=m.end();it++)
    {
      if((*it).second%k!=0)
        {
            cout<<"-1";
            return 0;
        }

    }
    string s1;
    int c;
    for(it=m.begin();it!=m.end();it++)
    {
        c=((*it).second)/k;

        char ch=(*it).first;
        s1.append(c,ch);

    }

    for(i=0;i<k;i++)
    {
        cout<<s1;
    }


}

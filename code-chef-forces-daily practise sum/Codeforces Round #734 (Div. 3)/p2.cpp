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
        int i;
        map<char,int>m;
        for(i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        auto it=m.begin();
        int sum=0;
        while(it!=m.end())
        {
          if((*it).second>=2)
          {
              sum+=2;

          }
          else if((*it).second==1)
          {
              sum++;
          }
          it++;
        }
        cout<<sum/2<<endl;
    }
}

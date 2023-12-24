#include<bits/stdc++.h>
#include<string>
#include<vector>
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
        int count=0;
        vector<int>v;
        for(i=1;i<s.length();i++)
        {

            if(i==s.length()-1)
            {
                if(s[i]=='1')
                {
                    if(s[i-1]=='1')
                        count++;
                    else
                        v.push_back(1);
                }
            }
            if(s[i-1]=='1')
            {
                count++;
            }
            else{
                if(count>0)
                {
                    v.push_back(count);
                    count=0;
                }
            }
        }
        int sum=0;
        sort(v.begin(),v.end());
        cout<<v.size()<<endl;
        auto it=v.begin();
        while(it!=v.end())
        {
            cout<<*it<<endl;
            it++;
        }

    }
}

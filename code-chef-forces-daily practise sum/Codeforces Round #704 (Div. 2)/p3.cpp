#include<bits/stdc++.h>
#include<vector>
#define ll long long int
using namespace std;
int main()
{
    ll n,m,i,j;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    vector<ll>starting,ending;
    i=0,j=0;
    while(i<=t.size()-1)
    {
        if(s[j]==t[i])
        {
            starting.push_back(j);
           //cout<<i<<" string s "<<endl;
            i++;
        }
        j++;
    }
    i=t.size()-1,j=s.size()-1;
    while(i>=0)
    {
        if(s[j]==t[i])
        {
            ending.push_back(j);
            //cout<<j<<" string s "<<endl;
            i--;
        }
        j--;
    }
    reverse(ending.begin(),ending.end());

    ll max1=0;
    for(i=0;i<m-1;i++)
    {
        max1=max(max1,ending[i+1]-starting[i]);
    }
    cout<<max1<<endl;
}
#include<bits/stdc++.h>
using namespace std;
bool sortBySec(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.second < b.second;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        vector<pair<int,int> > v(n);
        for(i=0;i<n;i++) 
        {
            cin>>v[i].first;
        }
        for(i=0;i<n;i++) 
        {
            cin>>v[i].second;
        }
        sort(v.begin(),v.end(),sortBySec);
        int sum=0;
        i=0;
        while(k>0 && i<n)
        {
            sum+=k;
            while(i<n && v[i].first<=sum)
            {
                i++;
            }
            k-=v[i].second;
        }
        if(i>=n)
        {
            cout<<"YES\n";
        }
        else if(k<=0)
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}
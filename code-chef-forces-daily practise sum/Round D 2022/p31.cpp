#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(int ind,int n,int m,int arr[],map<int,vector<int>> &m1,vector<vector<int>> &dp)
{
    int j;
    for(j=0;j<m1[arr[ind]].size();j++)
    {
        if(ind!=0)
        {
            dp[ind][j]=m1[arr[ind]][j]-dp[ind-1][j];
        }
        else{
            dp[ind][j]=m1[arr[ind]][j];
        }
        solve(ind+1,n,m,arr,m1,dp);
    }
    if(ind==n && j==m)
        return ;
}
int main()
{
    ll t;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
    int n,m,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];

    cin>>m;
    map<int,vector<int>> m1;
    for(i=0;i<m;i++)
    {
        ll temp;
        cin>>temp;
        m1[temp].push_back(i);
    }
    vector<vector<int>> dp(n,vector<int>(m,-1));

    solve(0,n,m,arr,m1,dp);
    int max1=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            max1=max(max1,dp[i][j]);
        }
    }
    cout<<"Case #"<<tt<<": "<<max1<<endl;
    }
}

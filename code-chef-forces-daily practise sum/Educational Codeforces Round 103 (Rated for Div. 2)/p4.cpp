#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        string s;
        cin>>n>>s;
        ll leftSum[n+1],rightSum[n+1];

        char k='j';
        j=0;
        leftSum[0]=0;
        for(i=0;i<n;i++)
        {
            if(k!=s[i])
            {
                j++;
            }
            else{
                j=1;
            }
            if(s[i]=='L')
            {
                leftSum[i+1]=j;
            }
            else{
                leftSum[i+1]=0;
            }
            k=s[i];
        }
        k='j';
        j=0;
        rightSum[n]=0;

        for(i=n-1;i>=0;i--)
        {
            if(k!=s[i])
            {
                j++;
            }
            else{
                j=1;
            }
            if(s[i]=='R')
            {
                rightSum[i]=j;
            }
            else{
                rightSum[i]=0;
            }
            k=s[i];
        }
        for(i=0;i<=n;i++)
        {
            cout<<leftSum[i]+rightSum[i]+1<<" ";
        }
        cout<<"\n";
    }
}


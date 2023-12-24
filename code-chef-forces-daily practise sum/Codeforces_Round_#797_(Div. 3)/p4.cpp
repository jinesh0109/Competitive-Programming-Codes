#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i;
        cin>>n>>k;
        string s;
        cin>>s;
        ll pre[n]={0};
        for(i=0;i<n;i++)
        {
            if(s[i]=='W')
            {
                if(i==0)
                    pre[i]=1;
                else
                    pre[i]=pre[i-1]+1;
            }
            else{
                if(i==0)
                    pre[i]=0;
                else
                    pre[i]=pre[i-1];
            }
        }
        ll min1=INT_MAX;
        min1=pre[k-1];
        for(i=k;i<n;i++)
        {
            ll temp=pre[i]-pre[i-k];
            if(temp<min1)
                min1=temp;
        }
        cout<<min1<<endl;
        
    }

}
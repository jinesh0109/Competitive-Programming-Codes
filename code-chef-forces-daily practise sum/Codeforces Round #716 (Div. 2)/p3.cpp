#include<bits/stdc++.h>
#include<vector>
#define ll long long int
using namespace std;
int main()
{
    ll n,i,j;
    cin>>n;
    vector<ll>v,v1;
    if(n<=4)
    {
        cout<<"1"<<endl;
        cout<<"1"<<endl;

    }
    else{


    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            v.push_back(i);
    }
    v.push_back(n);
    ll ans=1;
    for(i=1;i<n-1;i++)
    {
        int flag=1;
        for(j=0;j<v.size();j++)
        {
            if(i%v[j]==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            v1.push_back(i);
            ans=ans*i;
            ans=ans%n;
        }
    }
    if(ans%n!=1)
    {
        v1.push_back(n-1);
    }
    cout<<v1.size()<<endl;
    for(i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<"\n";
    }
}

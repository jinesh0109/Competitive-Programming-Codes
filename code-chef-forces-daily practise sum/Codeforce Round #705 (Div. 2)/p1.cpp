#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#include<vector>

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i;
        cin>>n>>k;
        vector<ll>v;
        if(n==1 && k==1)
        {
            cout<<"0\n";
            continue;
        }
        if(n>=k)
        {
            for(i=k+1;i<=n;i++)
            {
                v.push_back(i);
            }
            for(i=1;i<=k/2;i++)
            {
                ll temp=k-i;

                v.push_back(temp);
            }


        }
        else{
            int sum=n;
            v.push_back(n);
            for(i=n-1;i>=1;i--)
            {
                int temp=(sum+i)%k;
                auto it=find(v.begin(),v.end(),temp);
                if(it==v.end())
                {
                    v.push_back(i);
                    sum+=i;
                }

            }
        }

        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";

    }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#include<set>
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,s,i;
        cin>>n>>s;
        ll arr[n],sum=0;
        set<ll> s1;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]==1)
                s1.insert(i);
        }
        if(sum<s)
        {
            cout<<"-1\n";
        }
        else if(sum==s)
        {
            cout<<"0\n";
        }
        else{
            ll temp=sum-s;
            ll ans=0;
            ll start=0,end1=n-1;
            while(temp>0)
            {
                ll t1=*s1.begin()-start+1;
                ll t2=end1-(*--s1.end())+1;
                // cout<<t1<<" "<<(*--s1.end())<<endl;
                if(t1<=t2)
                {
                    ans+=t1;
                    start=*s1.begin()+1;
                    s1.erase(s1.begin());
                }
                else{
                    ans+=t2;
                    end1=(*--s1.end())-1;
                    
                    s1.erase(--s1.end());
                }
                cout<<t1<<" "<<t2<<" "<<temp<<endl;
                temp--;
                
            } 
            cout<<ans<<endl;
        }


    }
}
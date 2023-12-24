#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
   {
        ll a,b,n,i;
        cin>>n>>a>>b;
        if(a>b)
        {
            if(b==n/2 && a==(n/2+1))
            {
                for(i=a;i<n+1;i++)
                {
                    cout<<i<<" ";
                }
                for(i=1;i<b+1;i++)
                {
                    cout<<i<<" ";
                }

                cout<<"\n";
            }
            else
                cout<<"-1"<<endl;
        }
        else
        {
            set<ll>s1,s2;
            for(i=1;i<n;i++)
            {
                if(i!=a)
                {
                    s1.insert(i);
                }
                if(s1.size()==n/2-1)
                    break;
            }
            for(i=n;i>=0;i--)
            {
                if(i!=b)
                {
                    s2.insert(i);
                }
                if(s2.size()==n/2-1)
                    break;
            }
            s2.insert(a);
            s1.insert(b);
            if(s1.size()+s2.size()==n)
            {
                for(auto it : s2)
                    cout<<it<<" ";
                for(auto it : s1)
                    cout<<it<<" ";
                cout<<endl;
            }
            else
                cout<<"-1"<<endl;
        }
   }
}

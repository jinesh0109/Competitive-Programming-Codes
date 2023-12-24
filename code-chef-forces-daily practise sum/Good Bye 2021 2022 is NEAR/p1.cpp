#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
         map<ll,ll> m;
        for(i=0;i<n;i++)
        {
            ll temp;
            cin>>temp;
            if(temp<0)
            {
                temp=temp*-1;
            }
            m[temp]++;
        }
        auto it=m.begin();
        ll c=0;
        while(it!=m.end())
        {
            if((*it).first==0)
            {
                c++;
            }
            else{
                if((*it).second>=2)
                {
                    c+=2;
                }
                else{
                    c+=1;
                }
            }
            it++;
        }
        cout<<c<<endl;
    }
}

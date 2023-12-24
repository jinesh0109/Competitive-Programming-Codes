#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    vector<ll> v;
    v.push_back(1);
    ll num=1;
    while(num<=2*100000)
    {
        num=num*2;
        v.push_back(num);
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll i=n-1;
        ll c=0;
        while(i>=c)
        {
            auto it=find(v.begin(),v.end(),i);

            if(it==v.end())
            {
                cout<<i<<" ";
            }
            else{
                if(i==c)
                {
                    cout<<i<<" ";
                }
                else{
                    cout<<i<<" "<<c<<" ";
                }

                c++;
            }
            i--;
        }
        cout<<"\n";
    }

}


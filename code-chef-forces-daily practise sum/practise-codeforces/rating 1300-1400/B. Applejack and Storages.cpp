#include<bits/stdc++.h>
#include<unordered_map>
#include<set>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n],i;
    unordered_map<ll,ll>m;
    set <ll>s1,s2;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
        if(m[arr[i]]==2)
        {
            s1.insert(arr[i]);
        }
        else if(m[arr[i]]==4)
        {
            s1.erase(arr[i]);
            s2.insert(arr[i]);
        }
    }
    ll q,a,temp;
    cin>>q;
    char c;

    for(i=0;i<q;i++)
    {
        cin>>c>>a;
        if(c=='+')
        {
            m[a]++;
            if(m[a]==2)
            {
                s1.insert(a);
            }
            else if(m[a]==4)
            {
                s1.erase(a);
                s2.insert(a);
            }
        }
        if(c=='-')
        {
            if(m[a]==3||m[a]==5)
            {
                m[a]--;
            }
            else{
                if(m[a]==2)
                {
                    s1.erase(a);
                }
                else if(m[a]==4)
                {
                    s2.erase(a);
                    s1.insert(a);
                }
                m[a]--;

            }
        }
        auto it=s2.begin();


        if((s2.size()>=2 || (s1.size()>1 && s2.size()>=1))||(s2.size()==1 && (m[(*it)]>=8||(m[(*it)]>=6 && s1.size()>=1))))
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}

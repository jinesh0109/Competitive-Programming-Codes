#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#include<vector>
#include<set>

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        ll n,i;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll c=0,sum=0;
        vector<ll>v;
        multiset<ll>s;
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
            c++;
            s.insert(arr[i]);
            if(sum<0)
            {
                while(sum<0)
                {
                    sum-=*s.begin();
                    s.erase(s.begin());
                    c--;
                }
            }

        }
        cout<<c<<endl;
}

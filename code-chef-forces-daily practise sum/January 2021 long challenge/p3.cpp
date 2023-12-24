#include<bits/stdc++.h>
#include<set>
#include<iterator>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        ll arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        set<ll>s;
        s.insert(arr[n-1]);
        ll sum=arr[n-1];
        i=n-2;
        ll ans=-1;
        while(i>=0)
        {
            set<ll>s1;
            sum+=arr[i];
            auto it=s.begin();
            while(it!=s.end())
            {
                s1.insert(*it);
                s1.insert(arr[i]);
                s1.insert((*it)+arr[i]);
                if((*it)+arr[i]>=k && (sum-((*it)+arr[i]))>=k)
                {
                  ans=n-i;
                  break;
                }
                if(arr[i]>=k && sum-arr[i]>=k)
                {
                    ans=n-i;
                    break;
                }
                it++;
            }
            if(ans!=-1)
            {
                break;
            }
            s=s1;
            i--;
        }
        cout<<ans<<endl;




    }
}

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
       ll arr[n],arr1[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            arr1[i]=arr[i];
        }
        sort(arr,arr+n,greater<int>());
        ll back1=-1,j=1;
        map<ll,multiset<ll>>m;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                m[arr[i]].insert(j++);
            }
            else
                m[arr[i]].insert(back1--);
        }

        vector<ll>res;

    ll cost=0;

        res.push_back(0);

        for(i=0;i<n;i++)
        {
            cost+=abs(*m[arr1[i]].begin())*2*arr1[i];
            res.push_back(*m[arr1[i]].begin());
            m[arr1[i]].erase(m[arr1[i]].begin());
        }
        cout<<cost<<endl;
        for(i=0;i<n+1;i++)
            cout<<res[i]<<" ";
        cout<<"\n";
   }
   return 0;
}

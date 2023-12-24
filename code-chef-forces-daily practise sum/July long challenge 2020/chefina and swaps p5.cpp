#include<bits/stdc++.h>
#include<iterator>
#include<map>
#include<set>
#include<vector>
typedef long long int ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n],arr1[n],i,m=10000000000;
        map<ll,ll>a,b;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];

            if(arr[i]<m)
                m=arr[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>arr1[i];
            if(arr1[i]<m)
                m=arr1[i];
        }
        for(i=0;i<n;i++)
        {
            a[arr[i]]++;
            b[arr1[i]]++;
            auto it=a.find(arr1[i]),it1=b.find(arr[i]);

            if(it==a.end())
                a[arr1[i]]=0;
            if(it1==b.end())
                b[arr[i]]=0;
        }
        ll j=0;
        int f=1;
         vector<ll>a1,b1;
         auto it2=a.begin();
         auto it3=b.begin();
         while(it2!=a.end())
         {

             if((((*it2).second)+(*it3).second)%2==1)
             {
                 cout<<"-1\n";
                 f=0;
                 break;
             }
             else if(((*it2).second)>(*it3).second)
             {
               for(j=0;j<(((*it2).second)+(*it3).second)/2-(*it3).second;j++)
               {
                   a1.push_back((*it2).first);
               }
             }
             else if(((*it2).second)<(*it3).second)
             {
                for(j=0;j<(((*it2).second)+(*it3).second)/2-(*it2).second;j++)
               {
                   b1.push_back((*it2).first);
               }
             }
             it2++;
             it3++;
         }
         ll ans=0;
         if(f==0)continue;
         for(i=0,j=b1.size()-1;i<a1.size();i++,j--)
         {
              if(a1[i]==m||b1[j]==m){

                    ans=ans+m;

                }
                else if(a1[i]<m*2||b1[j]<m*2){

                    ans=ans+std::min(a1[i],b1[j]);

                }
                else{

                    ans=ans+m*2;
                }
         }
         cout<<ans<<endl;

    }
}

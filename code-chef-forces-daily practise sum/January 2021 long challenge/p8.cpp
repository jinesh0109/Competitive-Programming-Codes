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
        ll n,m,i;
        cin>>n>>m;
        set<ll>s,UniS,s1;
        ll arr[n],arr1[m];
        UniS.insert(0);
        s.insert(0);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<m;i++)
            cin>>arr1[i];

        do{
            s1.clear();
            auto it=s.begin();
            while(it!=s.end())
            {
                for(i=0;i<n;i++)
                {
                    ll temp=(arr[i]|(*it));
                    auto it2=UniS.find(temp);
                    if((it2)==UniS.end())
                    {
                        s1.insert(temp);
                        //cout<<temp<<" ";
                    }

                }
                //cout<<"\n";
                for(i=0;i<m;i++)
                {
                    ll temp1=(arr1[i]&(*it));
                    auto it3=UniS.find(temp1);
                    if(it3==UniS.end())
                    {
                        s1.insert(temp1);
                        //cout<<temp1<<" ";
                    }

                }
                //cout<<"\n";

                it++;

            }
            auto itt=s1.begin();
            while(itt!=s1.end() && s1.size()>0)
            {
               UniS.insert(*itt);
            //   cout<<*itt<<" ";
                itt++;
            }
            //if(s1.size()>0)
            //   cout<<"\n";


            s.clear();
            s=s1;

        }
        while(s1.size()>0);

        cout<<UniS.size()<<endl;
    }
}

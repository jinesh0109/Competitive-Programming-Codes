#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,k,i;
        cin>>n>>k;
        ll arr[n];
        map<ll,ll>m;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        auto it=m.begin();
        ll c=1;
        ll temp=1;
        map<ll,ll>m1;
        while(it!=m.end())
        {
            if(((*it).second)>=k)
            {
                m1[((*it).first)]=((*it).second);
            }

            it++;
        }

        if(m1.size()==0)
        {
            cout<<"-1\n";
        }
        else{
            auto it=m1.begin();
            auto it1=m1.begin();
            it1++;
            int start=(*it).first,end1=(*it).first;
            int start1=(*it).first,end2=(*it).first;
            while(it1!=m1.end())
            {
                if((((*it1).first)-((*it).first))==1)
                {
                    end1=(*it1).first;
                    temp++;
                    if(temp>c)
                    {
                        c=temp;
                        start1=start;
                        end2=end1;
                    }
                }
                else{
                    if(temp>c)
                    {
                        c=temp;
                        start1=start;
                        end2=end1;
                    }

                    start=(*it1).first,end1=(*it1).first;

                    temp=1;
                }
                //cout<<start<<" "<<end1<<" "<<temp<<endl;
                it++;
                it1++;
            }
            cout<<start1<<" "<<end2<<endl;

        }
    }
}

#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#define ll long long int
using namespace std;
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        n=n*2;
        vector<ll>v(n),v1(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(n==2)
        {
            cout<<"YES\n";
            cout<<v[0]+v[1]<<endl;
            cout<<v[0]<<" "<<v[1]<<endl;
            continue;
        }
        int flag1=1,flag=1;
        vector<pair<ll,ll>>displayValue;
        i=0;
        ll temp;
        while(i<n-1)
        {

            v1.clear();
            displayValue.clear();
            v1=v;
            j=v1.size()-1;
            ll x=v1[i]+v1[j];
            temp=x;
            displayValue.push_back(make_pair(v1[i],v1[j]));
            x=max(v1[i],v1[j]);
            v1.erase(v1.begin()+i);

            v1.erase(v1.begin()+v1.size()-1);

            j=v1.size()-1;

            while(v1.size()>0)
            {
                flag=1;
                vector<ll>::iterator low1;
                 low1=std::lower_bound(v1.begin(),v1.end(),x-v1[v1.size()-1]);
                 //cout<<*low1<<endl;
                if(*low1+v1[j]==x && low1!=v1.end()-1)
                {
                        x=max(*low1,v1[j]);
                        displayValue.push_back(make_pair(*low1,v1[j]));
                        //cout<<*low1<<" "<<v1[j]<<endl;
                        v1.erase(low1);
                        v1.erase(v1.begin()+v1.size()-1);
                        j=v1.size()-1;

                        flag=0;

                }
                else if(*low1+v1[j]>x || low1==v1.end() || low1==v1.end()-1)
                {
                    break;
                }


            }
                if(flag==1)
                {
                    i++;
                }
                else if(flag==0 && v1.size()<=0)
                {
                    break;
                }
        }
            if(flag==0)
            {
                flag1=0;
                cout<<"YES\n";
                cout<<temp<<endl;
                //cout<<"display value size "<<displayValue.size()<<endl;
                for(ll ii=0;ii<displayValue.size();ii++)
                {
                    cout<<displayValue[ii].first<<" "<<displayValue[ii].second<<endl;;
                }

            }


        if(flag1==1)
        {
            cout<<"NO\n";

        }

    }
}

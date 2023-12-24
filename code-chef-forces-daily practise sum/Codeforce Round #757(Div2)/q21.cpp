#include<bits/stdc++.h>
#include<vector>

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
        vector<ll>v,v1,v2;
        for(i=0;i<n;i++)
        {
            ll temp;
            cin>>temp;
            v.push_back(temp);
        }
        v1=v;
        sort(v1.begin(),v1.end());
        reverse(v1.begin(),v1.end());
        ll cost=0;

        ll c=1,c1=-1;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                v2.push_back(c);
                cost+=(abs(0-c))*v1[i]*2;
                c++;
            }
            else{
                v2.push_back(c1);
                cost+=(abs(0-c1))*v1[i]*2;
                c1--;
            }
         //   cout<<cost<<endl;
        }
        reverse(v2.begin(),v2.end());
        v2.insert(v2.begin(),0);
        cout<<cost<<endl;
        for(i=0;i<n+1;i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<"\n";
    }
}


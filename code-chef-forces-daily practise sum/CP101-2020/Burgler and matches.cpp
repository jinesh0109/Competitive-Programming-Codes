#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#define ll long long int
using namespace std;
int main()
{
    ll n,m,i,a,b;
    cin>>n>>m;
    vector<pair<ll,ll>>v;
    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end());
    auto it=v.end()-1;
    ll sum=0;
    while(it!=v.begin()-1)
    {
        if(n>=(*it).second)
        {
            sum+=(*it).second*(*it).first;
            n-=(*it).second;
        }
        else{
            sum+=n*(*it).first;

            break;
        }
        it--;
    }
    cout<<sum<<endl;

}

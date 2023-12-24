#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j;
        cin>>n>>m;
        ll c=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                ll t1=(m%i),t2=(m%j)%i;
                if(t1==t2)
                {
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}

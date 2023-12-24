#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        ll c1=0,c2=0,c3=INT_MAX;
        ll max1=0,min1=INT_MAX;
        for(i=0;i<n;i++)
        {
            ll l,r,c;
            cin>>l>>r>>c;
            if(l<min1)
            {
                min1=l;
                c1=c;
                c3=INT_MAX;
            }
            else if(l==min1)
            {
                c1=min(c1,c);
            }
            if(r>max1)
            {
                max1=r;
                c2=c;
                c3=INT_MAX;
            }
            else if(r==max1)
            {
                c2=min(c2,c);
            }
            if(l==min1 && r==max1)
            {
                c3=min(c3,c);
            }
            cout<<min(c3,c1+c2)<<endl;
        }

    }
}

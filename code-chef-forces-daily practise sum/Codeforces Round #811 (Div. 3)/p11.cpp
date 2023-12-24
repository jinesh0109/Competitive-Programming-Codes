#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,h,m,i,m1=1500,h1=1500;

        cin>>n>>h>>m;
        ll temp = h*60 + m;
        for(i=0;i<n;i++)
        {
            ll h2,m2;
            cin>>h2>>m2;
            ll temp1= h2*60 + m2;
            ll h3,m3;
            if(temp1>=temp)
            {

                h3 = (temp1-temp)/60;
                m3 = (temp1-temp)%60;
            }
            else{
                h3 = ((1440 - temp) + temp1)/60;
                m3 = ((1440 - temp) + temp1)%60;
            }
            if(h3<h1)
            {
                h1=h3;
                m1=m3;
            }
            else if(h3==h1)
            {
                if(m3<=m1)
                {
                    h1=h3;
                    m1=m3;
                }
            }
        }
        cout<<h1<<" "<<m1<<endl;
    }
}

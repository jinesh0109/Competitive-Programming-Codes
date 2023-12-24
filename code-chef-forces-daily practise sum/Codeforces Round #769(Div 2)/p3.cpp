#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll a1=a,b1=b;
        ll ans1=b-a;
        ll c=0,c1=0;
        while((b1&a)<a)
            b1++;

        while((a1&b)<a1)
            a1++;

        if((b1|a)==a)
            ans1=min(ans1,b1-b);
        else{
            ans1=min(ans1,b1-b+1);
        }

        if((a1|b)==a1)
        {
            ans1=min(ans1,a1-a);
        }
        else{
            ans1=min(ans1,a1-a+1);
        }
        cout<<ans1<<endl;


    }
}

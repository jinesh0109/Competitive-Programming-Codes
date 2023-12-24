#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%7==0)
        {
            cout<<n<<endl;
            continue;
        }
        ll mod1=n%7;
        ll a1=n-mod1,a2=n+(7-mod1);
        if((n/10)==(a1/10))
        {
            cout<<a1<<endl;
        }
        else {
            cout<<a2<<endl;
        }
    }
}

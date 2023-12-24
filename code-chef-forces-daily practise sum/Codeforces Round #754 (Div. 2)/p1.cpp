#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%3==0)
        {
            cout<<"0\n";
        }
        else{
            cout<<"1\n";
        }

    }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a1,b1;
        cin>>a1>>b1;
        if(a1==0)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<1*a1+2*b1+1<<endl;
        }
    }
}

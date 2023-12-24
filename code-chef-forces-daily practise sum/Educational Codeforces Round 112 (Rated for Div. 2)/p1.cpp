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
        ll t1=n%6;
        ll t2=n%8;
        ll t3=n%10;

        if(n<=6)
        {
            cout<<15<<endl;
        }
        else if(t1==0)
        {
            cout<<15*(n/6)<<endl;
        }
        else if(t2==0)
        {
            cout<<20*(n/8)<<endl;
        }
        else if(t3==0)
        {
            cout<<25*(n/10)<<endl;
        }
        else if(t1<=2)
        {
            cout<<20+15*((n/6)-1)<<endl;
        }
        else if(t1<=4){
            cout<<25+15*((n/6)-1)<<endl;
        }
        else if(t1==5)
        {
            cout<<15*((n/6)+1)<<endl;
        }
    }
}

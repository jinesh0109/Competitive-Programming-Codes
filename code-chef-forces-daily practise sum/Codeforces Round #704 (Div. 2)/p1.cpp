#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        ll ans;
        ll temp0,temp1,temp2;
        if(p%a==0 || p%b==0 || p%c==0)
        {
            cout<<"0\n";
        }
        else 
        {
            temp0=p/a,temp1=p/b,temp2=p/c;
            ans=min(temp0*(a)+a,min(temp1*(b)+b,temp2*(c)+c))-p;
            cout<<ans<<endl;
        }
    }
    
}
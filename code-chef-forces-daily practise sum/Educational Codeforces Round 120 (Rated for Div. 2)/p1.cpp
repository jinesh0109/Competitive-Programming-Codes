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
        if(a==b && b==c)
        {
            if(a%2==1)
            {
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
        else if(a==b)
        {
            if(c%2==1)
            {
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
        else if(a==c)
        {
            if(b%2==1)
            {
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
        else if(c==b)
        {
            if(a%2==1)
            {
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
        else if(a!=b && a!=c && b!=c){
            if(a+b==c || a+c==b || b+c==a)
            {
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }

        }

    }
}

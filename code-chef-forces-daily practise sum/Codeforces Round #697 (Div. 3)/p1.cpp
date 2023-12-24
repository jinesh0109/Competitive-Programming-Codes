#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
            cout<<"NO\n";
        else{
            if(n%2==1)
            {
                cout<<"YES\n";
            }
            else{
                int flag=1;
                while(n>1)
                {
                    n=n/2;
                    if(n%2==1 && n!=1)
                    {
                        cout<<"YES\n";
                        flag=0;
                        break;
                    }
                }
            if(flag==1)
                cout<<"NO\n";
            }
        }

    }

}

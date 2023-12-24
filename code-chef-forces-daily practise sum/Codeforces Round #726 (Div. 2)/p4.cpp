#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        if(n==1 || n==2)
        {
            cout<<"Bob\n";
            continue;
        }
        else if(n%2==1)
        {
            cout<<"Bob\n";
            continue;
        }
        else{
            ll ans=2;
            int pow=1;
            while(ans*2<=n)
            {
                ans=ans*2;
                pow++;
            }
            if(ans==n)
            {
                if(pow%2==1)
                {
                    cout<<"Bob\n";
                }
                else{
                    cout<<"Alice\n";
                }
            }
            else{
                cout<<"Alice\n";
            }

        }

    }
}

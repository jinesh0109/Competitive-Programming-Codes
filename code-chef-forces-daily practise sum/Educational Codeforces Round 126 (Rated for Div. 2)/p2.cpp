#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        if(n>s)
        {
            cout<<"0\n";
        }
        else{
            ll ans=s/pow(n,2);
            if(n+1>=ans)
            {
                cout<<ans<<endl;
            }
            else{
                cout<<ans-1<<endl;
            }
        }
    }

}

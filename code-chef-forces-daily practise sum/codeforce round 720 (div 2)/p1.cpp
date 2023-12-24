
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(b==1)
        {
            cout<<"NO\n";
        }
        else{
            if(b==2)
            {
                ll ans=a*b*2;
                ll ans1=a*(b*2-1);
                ll ans2=ans-ans1;
                cout<<"YES\n";
                cout<<ans1<<" "<<ans2<<" "<<ans<<endl;
            }
            else if(b>2)
            {
                ll ans=a*b;
                ll ans1=a*(b-1);
                ll ans2=ans-ans1;
                cout<<"YES\n";
                cout<<ans1<<" "<<ans2<<" "<<ans<<endl;
            }

        }
    }
}

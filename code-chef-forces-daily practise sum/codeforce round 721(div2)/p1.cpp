#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,i;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1 )
        {
            cout<<"0\n";
            continue;
        }
        if(n==2)
        {
            cout<<"1\n";
            continue;
        }
        ll ans=2,flag=1;
        for(i=1;i<=32;i++)
        {
            ans=ans*2;
            if(ans>n)
                break;
            else if(ans==n)
            {
                cout<<ans-1<<endl;
                flag=0;
                break;
            }



        }
        if(flag==1)
            cout<<(ans/2)-1<<endl;
    }

}

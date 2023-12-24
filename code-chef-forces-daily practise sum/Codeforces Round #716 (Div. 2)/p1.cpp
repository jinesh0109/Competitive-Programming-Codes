#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int flag=1;

        for(i=0;i<n;i++)
        {

            ll temp=sqrt(arr[i]);
            //cout<<temp<<endl;
            if(temp*temp!=(arr[i]))
            {
                flag=0;
                break;
            }
        }N
        if(flag==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}

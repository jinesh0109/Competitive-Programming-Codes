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
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        if(arr[0]!=n && arr[n-1]!=n )
        {
            cout<<"-1\n";
        }
        else{

            for(i=n-1;i>=0;i--)
            {
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }

    }

}

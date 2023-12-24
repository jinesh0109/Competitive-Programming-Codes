#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        ll sma=INT_MAX;
        ll ind;
        for(i=0;i<n;i++)
        {

            cin>>arr[i];
            if(arr[i]<sma)
            {

                sma=arr[i];
                ind=i;
            }

        }
        if(n%2==1)
        {
            cout<<"Mike\n";
        }
        else{
            if(ind%2==1)
            {
                cout<<"Mike\n";
            }
            else{
                cout<<"Joe\n";
            }
        }

    }
}


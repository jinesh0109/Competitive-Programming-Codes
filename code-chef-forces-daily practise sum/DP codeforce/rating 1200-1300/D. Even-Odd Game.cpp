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
        sort(arr,arr+n);
        ll s=0,c=0;
        for(i=n-1;i>=0;i--)
        {
            if(arr[i]%2==0)
            {
                if(c%2==0)
                {
                    s+=arr[i];
                }
            }
            else{
                if(c%2==1)
                {
                    s-=arr[i];
                }
            }
            c++;
        }
        if(s>0)
            cout<<"Alice\n";
        else if(s==0)
            cout<<"Tie\n";
        else
            cout<<"Bob\n";
    }
}

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
        ll c=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%10==0 || arr[i]%10==5)
                c++;
        }
        int f=1;
        if(c==n)
        {
            for(i=0;i<n;i++)
            {
                if(arr[i]%10==5)
                    arr[i]+=5;
            }

            for(i=1;i<n;i++)
            {
                if(arr[i]!=arr[i-1])
                {
                    f=0;
                    //cout<<"where "<<arr[i]<<" "<<arr[i-1]<<" "<<i<<" "<<i-1<<endl;
                    break;
                }
            }

            if(f==1)
            {
                cout<<"YES\n";
                continue;
            }
            else
            {
                cout<<"NO\n";
                continue;
            }
        }
        if(c>0)
        {
            cout<<"NO\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            while(arr[i]%10!=2)
                arr[i]+=arr[i]%10;
        }
        f=1;
        for(i=1;i<n;i++)
        {
            arr[i]=abs(arr[i]-arr[0]);
            arr[i]=arr[i]/10;
            if(arr[i]%2==1)
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }

}


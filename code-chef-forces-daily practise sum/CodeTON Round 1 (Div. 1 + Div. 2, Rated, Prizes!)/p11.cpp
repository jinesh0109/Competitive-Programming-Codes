
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
        ll min1=INT_MAX,min2=INT_MAX,minind,minind1=1,max1=0,maxind;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>max1)
            {

                max1=arr[i];
                maxind=i+1;

            }

            if(arr[i]<min1)
            {
                min1=arr[i];
                minind=i+1;
            }

        }
        if(n==1)
        {
            cout<<"1 1\n";
            continue;
        }
        cout<<minind<<" "<<maxind<<endl;


    }
}

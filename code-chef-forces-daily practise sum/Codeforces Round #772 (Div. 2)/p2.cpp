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
        ll arr[n],arr1[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            arr1[i]=arr[i];
        }
        for(i=1;i<n-1;i++)
        {

            if(arr1[i]>arr1[i-1] && arr1[i]>arr1[i+1])
            {
                if(i==n-2)
                    arr1[i+1]=arr1[i];
                else if(arr[i+2]>arr[i])
                    arr1[i+1]=arr1[i+2];
                else
                    arr1[i+1]=arr1[i];
            }
        }

        ll c=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]!=arr1[i])
            {
                c++;
            }
        }
        cout<<c<<endl;
        for(i=0;i<n;i++)
        {
            cout<<arr1[i]<<" ";
        }
        cout<<"\n";
    }
}

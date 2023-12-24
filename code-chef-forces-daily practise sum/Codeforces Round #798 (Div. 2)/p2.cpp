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
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        {
            cout<<"-1\n";
            continue;
        }
        ll arr1[n]={0};
        ll arr2[n];
        for(i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=n-1)
                {
                    if(arr[i]!=(j+1))
                    {
                        if(arr1[j]==0)
                        {
                            arr1[j]=1;
                            arr2[i]=j+1;
                            break;
                        }
                    }
                }
                else{
                    if(arr1[j]==0)
                        {
                            arr1[j]=1;
                            arr2[i]=j+1;
                            break;
                        }
                }
                
            }
        }
        if(arr2[n-1]==arr[n-1])
        {
            swap(arr2[n-2],arr2[n-1]);
        }
        for(i=0;i<n;i++)
        {
            cout<<arr2[i]<<" ";
        }
        cout<<"\n";
    }
}
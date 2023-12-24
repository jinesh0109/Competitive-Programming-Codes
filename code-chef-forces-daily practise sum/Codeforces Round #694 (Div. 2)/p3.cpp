#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,i;
        cin>>n>>m;
        ll arr[n],arr1[m];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(i=0;i<m;i++)
        {
            cin>>arr1[i];
        }
        ll s=0,j=0;
        for(i=n-1;i>=0;i--)
        {
            if(arr1[arr[i]-1]>arr1[j])
            {
                s+=arr1[j];
                j++;
            }

            else{
                s+=arr1[arr[i]-1];
            }
        }
        cout<<s<<endl;

    }
}

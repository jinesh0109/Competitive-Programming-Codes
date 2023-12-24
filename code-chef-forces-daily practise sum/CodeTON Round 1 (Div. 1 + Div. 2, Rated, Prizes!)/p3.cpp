#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        int c0=0,c1=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
                c0++;
            if(arr[i]==1)
                c1++;
        }
        if(c0==n || c1==n)
        {
            cout<<"YES\n";
            continue;
        }
        if(c0>0 && c1>0)
        {
            cout<<"NO\n";
            continue;
        }
        sort(arr,arr+n);
        int f=1;
        for(i=0;i<n-1;i++)
        {
            if(arr[i]+1==arr[i+1])
            {
                f=0;
                break;
            }
        }
        if(f==0 && c1>0)
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}

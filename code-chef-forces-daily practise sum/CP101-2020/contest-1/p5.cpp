#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
        ll b,n,m,i,j;
        cin>>b>>n>>m;
        ll arr[n],arr1[m];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<m;i++)cin>>arr1[i];
        ll max1=0,flag=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(arr[i]+arr1[j]<=b)
                {
                    if(arr[i]+arr1[j]>max1)
                    {
                        max1=arr[i]+arr1[j];
                        flag=0;
                    }

                }
            }
        }
        if(flag==0)
            cout<<max1;
        else
            cout<<"-1\n";
}

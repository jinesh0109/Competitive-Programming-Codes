#include<bits/stdc++.h>
using namespace std;
#include<vector>
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i;
        cin>>n;
        long long int arr[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        long long int ans[n+1],index[n+1],max1[n+1];
        for(i=1;i<=n;i++)
        {
            index[i]=0;
            max1[i]=0;
            ans[i]=-1;
        }
        long long int temp;
        for(i=1;i<=n;i++)
        {
            temp=arr[i];
            if(i-index[temp]>max1[temp])
            {
                max1[temp]=i-index[temp];
            }
            index[temp]=i;
        }
        for(i=1;i<=n;i++)
        {
            if(n-index[i]+1>max1[i])
            {
                max1[i]=n-index[i]+1;
            }
            for (int x = max1[i]; x <= n && ans[x] == -1; ++x)
                ans[x] = i;
        }

        for(i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}

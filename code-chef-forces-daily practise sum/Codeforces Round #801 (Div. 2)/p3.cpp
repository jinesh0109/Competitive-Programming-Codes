#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {

        ll n,m,i,j;
        cin>>n>>m;
        ll arr[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        if((n+m-1)%2==0)
        {

        }
        else{
            cout<<"NO\n";
            continue;
        }
        ll arr1[n][m];
        ll arr2[n][m];
        if(arr[n-1][m-1]==1){
            arr1[n-1][m-1]=1;
            arr2[n-1][m-1]=0;
        }
        else if(arr[n-1][m-1]==-1)
        {
            arr1[n-1][m-1]=0;
            arr2[n-1][m-1]=1;
        }
        i=n-1;
        for(j=m-2;j>=0;j--)
        {
            if(arr[i][j]==1)
            {
                arr1[i][j]=arr1[i][j+1]+1;
                arr2[i][j]=arr2[i][j+1];
            }
            else{
                arr1[i][j]=arr1[i][j+1];
                arr2[i][j]=arr2[i][j+1]+1;
            }
        }
        j=m-1;
        for(i=n-2;i>=0;i--)
        {
            if(arr[i][j]==1)
            {
                arr1[i][j]=arr1[i+1][j]+1;
                arr2[i][j]=arr2[i+1][j];
            }
            else{
                arr1[i][j]=arr1[i+1][j];
                arr2[i][j]=arr2[i+1][j]+1;
            }
        }
        for(i=n-2;i>=0;i--)
        {
            for(j=m-2;j>=0;j--)
            {
                if(arr[i][j]==1)
                {
                    arr1[i][j]=1+max(arr1[i+1][j],arr1[i][j+1]);
                    arr2[i][j]=max(arr2[i+1][j],arr2[i][j+1]);
                }
                else{
                    arr1[i][j]=max(arr1[i+1][j],arr1[i][j+1]);
                    arr2[i][j]=1+max(arr2[i+1][j],arr2[i][j+1]);
                }
            }
        }
        ll arr3[n][m],arr4[n][m];
        if(arr[0][0]==1)
        {
            arr3[0][0]=1;
            arr4[0][0]=0;
        }
        else if(arr[0][0]==-1)
        {
            arr3[0][0]=0;
            arr4[0][0]=1;
        }
        i=0;
        for(j=1;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                arr3[i][j]=1+arr3[i][j-1];
                arr4[i][j]=arr4[i][j-1];
            }
            else{
                arr3[i][j]=arr3[i][j-1];
                arr4[i][j]=1+arr4[i][j-1];
            }
        }
        j=0;
        for(i=1;i<n;i++)
        {
            if(arr[i][j]==1)
            {
                arr3[i][j]=1+arr3[i-1][j];
                arr4[i][j]=arr4[i-1][j];
            }
            else{
                arr3[i][j]=arr3[i-1][j];
                arr4[i][j]=1+arr4[i-1][j];
            }
        }
        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                if(arr[i][j]==1)
                {
                    arr3[i][j]=1+max(arr3[i-1][j],arr3[i][j-1]);
                    arr4[i][j]=max(arr4[i-1][j],arr4[i][j-1]);
                }
                else{
                    arr3[i][j]=max(arr3[i-1][j],arr3[i][j-1]);
                    arr4[i][j]=1+max(arr4[i-1][j],arr4[i][j-1]);
                }
            }
        }

        ll x=(m+n)/2;
        int f=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(arr[i][j]==1)
                {
                    if((arr1[i][j]+arr3[i][j]-1)>=x && arr2[i][j]+arr4[i][j]>=x)
                    {

                        f=0;
                        break;
                    }

                }
                else{
                    if((arr1[i][j]+arr3[i][j]>=x) && (arr2[i][j]+arr4[i][j]-1)>=x)
                    {

                        f=0;
                        break;
                    }
                }

            }
            if(f==0)
                break;
        }
        if(f==0)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }

}

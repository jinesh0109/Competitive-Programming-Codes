#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c,i,j,x,k;
        cin>>r>>c>>x;
        ll arr[r][c],arr1[r][c];
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>arr1[i][j];
            }
        }
        for(i=0;i<r;i++)
        {
            if(i%2==0)
            {
                for(j=0;j<=c-x;j++)
                {
                    if(arr[i][j]!=arr1[i][j])
                    {
                       ll diff=arr1[i][j]-arr[i][j];
                       for(k=j;k<j+x;k++)
                       {
                           arr[i][k]+=diff;
                           //cout<<i<<" "<<k<<endl;
                       }
                    }
                }
                for(j=c-x+1;j<c;j++)
                {
                    if(arr[i][j]!=arr1[i][j])
                    {
                        ll diff=arr1[i][j]-arr[i][j];
                        if(i<=r-x)
                        {
                            for(k=i;k<i+x;k++)
                            {
                                arr[k][j]+=diff;
                                //cout<<k<<" "<<j<<endl;
                            }
                        }

                    }
                }
            }
            else{
                for(j=c-1;j>=(c-1)-(c-x);j--)
                {
                    if(arr[i][j]!=arr1[i][j])
                    {
                        ll diff=arr1[i][j]-arr[i][j];
                        for(k=j;k>j-x;k--)
                        {
                            arr[i][k]+=diff;
                            //cout<<i<<" "<<k<<endl;
                        }
                    }
                }
                for(j=(c-1)-(c-x)-1;j>=0;j--)
                {
                    if(arr[i][j]!=arr1[i][j])
                    {
                        ll diff=arr1[i][j]-arr[i][j];
                        if(i<=r-x)
                        {
                            for(k=i;k<i+x;k++)
                            {
                                arr[k][j]+=diff;
                                //cout<<k<<" "<<j<<endl;
                            }
                        }

                    }
                }
            }

        }
        int flag=1;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(arr[i][j]!=arr1[i][j])
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }

    }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        ll arr[n][n];
        if(n==1)
        {
            cout<<"1\n";
            continue;
        }
        else if(n==2)
        {
            cout<<"-1\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                arr[i][j]=n*i+j+1;
            }
        }
        int flag=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i!=n-1)
                {
                    if(j%2==1 && i%2==0)
                    {
                        ll temp=arr[i][j];
                        arr[i][j]=arr[i+1][j];
                        arr[i+1][j]=temp;
                    }
                }
                else if(i==n-1){
                    if(j%2==1 && i%2==0)
                    {
                        ll temp=arr[i][j];
                        arr[i][j]=arr[i-1][j];
                        arr[i-1][j]=temp;
                    }
                }

            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }


    }
}

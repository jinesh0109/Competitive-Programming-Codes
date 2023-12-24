#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j,k;
        cin>>n>>m;
        char arr[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(i=n-2;i>=0;i--)
        {
            for(j=0;j<m;j++)
            {
                if(arr[i][j]=='*')
                {
                    int f=1;
                    for(k=i+1;k<n;k++)
                    {
                        if(arr[k][j]=='o' || arr[k][j]=='*')
                        {
                            arr[i][j]='.';
                            arr[k-1][j]='*';

                            f=0;
                            break;
                        }
                    }
                    if(f==1)
                    {
                        arr[i][j]='.';
                        arr[n-1][j]='*';

                    }
                }

            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
}

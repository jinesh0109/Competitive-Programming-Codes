
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
        for(i=0;i<n;i++)
        {
            string s;
            cin>>s;
            for(j=0;j<n;j++)
            {
                ll temp;
                temp=s[j]-48;
                arr[i][j]=temp;
            }
        }
        int flag=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i][j]==1)
                {
                        if(j!=n-1 && i!=n-1)
                        {
                            if(arr[i+1][j]!=1 && arr[i][j+1]!=1)
                            {
                                flag=0;
                                break;
                            }
                        }

                }
            }
            if(flag==0)
                break;
        }
        if(flag==1)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}

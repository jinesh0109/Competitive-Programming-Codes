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
        char arr[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                arr[i][j]='.';
            }
        }
        if(n%2==1)
        {
            arr[n/2][n/2]='Q';
            for(i=1;i<n-1;i++)
            {
                if(i!=n/2)
                {
                    arr[i][0]='Q';
                }
            }
        }
        else{
            arr[n-2][1]='Q';
            arr[0][n-1]='Q';
            ll c=n-2,row=1;
            c-=2;
            for(i=1;i<n-2;i++)
            {
                if(c>0)
                {
                    arr[row][n-1-i]='Q';
                    row++;
                    c--;
                }
                else{
                    break;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<arr[i][j];
            }
            cout<<"\n";
        }
    }

}

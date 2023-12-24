#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m;

        int arr[2*n][2];
        for(i=0;i<2*n;i++)
        {
            for(j=0;j<2;j++)
            {
                cin>>arr[i][j];
            }
        }
        if(m%2==1)
        {
            cout<<"NO\n";
            continue;
        }
        int flag=1;
        for(i=0;i<2*n;i=i+2)
        {
            if(arr[i][1]==arr[i+1][0])
            {
                cout<<"YES\n";
                flag=0;
                break;
            }

        }
        if(flag==1)cout<<"NO\n";
    }
}

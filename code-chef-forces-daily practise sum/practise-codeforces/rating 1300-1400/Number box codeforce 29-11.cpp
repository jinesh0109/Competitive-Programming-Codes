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
        int arr[n][m],c=0;
        int sum=0,min1=10000;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]<0)c++;
                min1=min(min1,abs(arr[i][j]));
                sum+=abs(arr[i][j]);
            }
        }
        if(c%2==1)
        {
            cout<<sum-2*min1<<endl;
        }
        else{
            cout<<sum<<endl;
        }
    }
}

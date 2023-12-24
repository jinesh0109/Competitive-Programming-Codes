#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n][n];
    long long int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(i==j)
                sum+=arr[i][j];
            if(i==n/2)
                sum+=arr[i][j];
            if(j==n/2)
                sum+=arr[i][j];
            if(i==n-j-1)
                sum+=arr[i][j];

        }
    }
    sum=sum-(3*arr[n/2][n/2]);
    cout<<sum<<endl;
}

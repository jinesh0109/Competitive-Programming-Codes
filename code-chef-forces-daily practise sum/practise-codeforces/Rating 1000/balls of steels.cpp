#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,i,j;
        cin>>n>>k;
        long long int arr[n],arr1[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i]>>arr1[i];
        }
        int flag;
        for(i=0;i<n;i++)
        {
            flag=1;
            for(j=0;j<n;j++)
            {
                long long int temp=abs(arr[i]-arr[j])+abs(arr1[i]-arr1[j]);
                if(temp<=k)
                {
                    flag=0;
                }
                else{
                    flag=1;
                    break;
                }

            }
            if(flag==0)
            {
                break;
            }
        }
        if(flag==0) cout<<"1\n";
        else cout<<"-1\n";
    }
}

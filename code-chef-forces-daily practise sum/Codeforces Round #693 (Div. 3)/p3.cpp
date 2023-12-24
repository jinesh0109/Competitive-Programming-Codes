#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i;
        cin>>n;
        long long int arr[n+1],arr1[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        arr1[n]=arr[n];
        for(i=n-1;i>=1;i--)
        {
            if(arr[i]+i<=n)
            {
                arr1[i]=arr1[i+arr[i]]+arr[i];
            }
            else{
                arr1[i]=arr[i];
            }
        }

        long long int max1=0;
        for(i=1;i<=n;i++)
        {
            if(arr1[i]>max1)
                max1=arr1[i];
        }
        cout<<max1<<endl;




    }
}

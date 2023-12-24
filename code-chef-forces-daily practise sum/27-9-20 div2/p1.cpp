#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long int sum=0;
        for(i=1;i<n;i++)
        {

                sum+=(k-arr[i])/arr[0];

        }
        cout<<sum<<endl;
    }
}

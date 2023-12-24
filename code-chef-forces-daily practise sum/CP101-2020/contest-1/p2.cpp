#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr[5],i;
    for(i=0;i<5;i++)cin>>arr[i];
    sort(arr,arr+5);
    long long int sum=0,sum1=0;
    for(i=0;i<5;i++)
    {
        if(i==0)
        {
            sum+=arr[i];
        }
        else if(i==4)
        {
            sum1+=arr[i];
        }
        else{
            sum+=arr[i];
            sum1+=arr[i];
        }
    }
    cout<<sum<<" "<<sum1;
}

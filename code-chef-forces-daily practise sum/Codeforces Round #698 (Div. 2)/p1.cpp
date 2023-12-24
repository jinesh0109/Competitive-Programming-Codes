#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n],arr1[n]={0};
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            arr1[arr[i]-1]++;
        }
        int max1=0;
        for(i=0;i<n;i++)
        {
            max1=max(max1,arr1[i]);
        }
        cout<<max1<<endl;
    }
}

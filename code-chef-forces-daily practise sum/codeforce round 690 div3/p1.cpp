#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int arr[n],i;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        i=0;
        long long int j=n-1;
        while(i<j)
        {
            cout<<arr[i]<<" "<<arr[j]<<" ";
            i++;
            j--;
        }
        if(n%2!=0)
        {
            cout<<arr[n/2]<<endl;
        }
        else{
            cout<<"\n";
        }
    }
}

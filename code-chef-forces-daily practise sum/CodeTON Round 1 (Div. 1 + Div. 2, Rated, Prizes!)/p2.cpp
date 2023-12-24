#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool findPair(int arr[], int size, int n)
{
    // Initialize positions of two elements
    int i = 0;
    int j = 1;

    // Search for a pair
    while (i < size && j < size)
    {
        if (i != j && (arr[j] - arr[i] == n || arr[i] - arr[j] == n) )
        {
            return true;
        }
        else if (arr[j]-arr[i] < n)
            j++;
        else
            i++;
    }


    return false;
}
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
        i=0;
        int size = sizeof(arr)/sizeof(arr[0]);
        bool ans=findPair(arr, size, k);
        if(ans==true)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }



    }
}

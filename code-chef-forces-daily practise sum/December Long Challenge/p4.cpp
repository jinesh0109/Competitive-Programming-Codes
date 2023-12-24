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
        int arr[n+1];
        for(i=1;i<=n;i++)
        {
            arr[i]=-i;
        }
        i=1;
        while(i<=n && k>0)
        {
            k--;
            arr[i]=i;
            i=i+2;
        }
        if(k>0)
        {
            if(n%2==0)
            {
                i=n;
            }
            else{
                i=n-1;
            }
            while(i>=2 && k>0)
                {
                    k--;
                    arr[i]=i;
                    i=i-2;
                }
        }
        for(i=1;i<=n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}

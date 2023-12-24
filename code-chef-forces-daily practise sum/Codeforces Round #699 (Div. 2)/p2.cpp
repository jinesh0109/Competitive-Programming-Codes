#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,i;
        cin>>n>>k;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int flag=1;
        ll temp;
        while(k>0)
        {
            i=0;
            while(i<n)
            {
                if(i==n-1)
                {
                    break;
                }
                if(arr[i]<arr[i+1])
                {
                   if(k>arr[i+1]-arr[i])
                   {
                       k-=arr[i+1]-arr[i];
                   }
                   else if(k<=arr[i+1]-arr[i]){
                        flag=0;
                        temp=i+1;
                        break;
                   }
                }
                else{
                    i++;
                }
            }
            if(flag==0 || i==n-1)
                break;
        }
        if(flag==0)
        {
            cout<<temp<<endl;
        }
        else{
            cout<<"-1\n";
        }
    }
}

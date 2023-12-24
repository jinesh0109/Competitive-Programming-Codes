#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        int arr[n],i,flag=1;
        for(i=0;i<n;i++)arr[i]=0;
        while(arr[x]==0)
        {
            if(x==y)
            {
                flag=0;
                break;
            }
            arr[x]=1;
            x=(x+k)%n;
            if(arr[x]!=0 && x!=y)
            {
                break;
            }
            else if(x==y)
            {
                flag=0;
                break;
            }
        }
        if(flag==1) cout<<"NO\n";
        else cout<<"YES\n";
    }

}

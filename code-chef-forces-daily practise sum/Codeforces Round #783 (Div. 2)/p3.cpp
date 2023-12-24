#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,i,j,k;
    cin>>n;
    ll arr[n],arr1[n];
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
        arr[i]=arr1[i];
    }
    ll ans=1e18;
    for(i=0;i<n;i++)
    {
        ll ans1=0,ans2=0;
        arr[i]=0;
            for(j=i-1;j>=0;j--)
            {
                if(arr[j]>arr[j+1])
                {
                    ans1++;
                }
                else{
                    ll temp=(arr[j+1]/arr[j])+1;
                    ans1+=temp;
                    arr[j]=arr[j]*temp;
                }
            }



            for(j=i+1;j<n;j++)
            {
                if(arr[j]>arr[j-1])
                {
                    ans2++;
                }
                else{
                    ll temp=(arr[j-1]/arr[j])+1;
                    ans2+=temp;
                    arr[j]=arr[j]*temp;
                }
            }


        ans=min(ans,ans1+ans2);
        for(k=0;k<n;k++)
        {
            arr[k]=arr1[k];
        }

    }
    cout<<ans<<endl;
}

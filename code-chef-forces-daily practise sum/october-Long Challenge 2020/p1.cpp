#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{


ll t;
cin>>t;
while(t--)
{
    ll n,k,i;
    cin>>n>>k;
    ll arr[n];
    for(i=0;i<n;i++)cin>>arr[i];
    ll c=0,diff=0,flag=1;
    for(i=0;i<n;i++)
    {
        arr[i]+=diff;
        if(arr[i]>=k)
        {
            c++;
            diff=arr[i]-k;
        }
        else{
            c++;
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        if(diff%k==0)
        {
            c+=diff/k+1;
        }
        else{
            c+=ceil(double(diff)/(double(k)));
        }

    }
    cout<<c<<endl;
}

}

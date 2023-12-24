#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,i,w,j;
    cin>>n>>w;
    ll arr[n],arr1[n],arr2[n],arr3[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
        arr3[i]=0;
    }

    ll w1;
    w1=w;
    int flag=1;
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]%2==0)
        {
            if(w1>=arr[i]/2)
            {
                arr1[i]=arr[i]/2;
                w1=w1-arr1[i];
            }
            else{
                flag=0;
                //cout<<"HERE "<<i<<endl;
                break;
            }
        }
        else{
            if(w1>=(arr[i]/2)+1)
            {
                arr1[i]=(arr[i]/2)+1;
                w1=w1-arr1[i];
            }
            else{
                flag=0;
                //cout<<"HERE "<<i<<endl;
                break;
            }
        }
    }
    sort(arr,arr+n);
    ll sum=0;
    for(i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
        sum+=arr1[i];
    }
    cout<<"\n";
    cout<<sum<<" "<<w1<<" "<<w1+sum<<endl;
    if(flag==0)
    {
        cout<<"-1\n";
        return 0;
    }
    if(w1>0)
    {
        for(i=n-1;i>=0;i--)
        {
            if(w1>=(arr[i]-arr1[i]))
            {
                arr1[i]=arr[i];
                w1-=arr[i]-arr1[i];
            }
            else{
                arr1[i]+=w1;
                w1=0;
                //cout<<"HERE\n";
            }
        }
    }
    if(flag==1)
    {
        for(i=n-1;i>=0;i--)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i]==arr2[j])
                {
                    if(arr3[j]==0)
                    {
                        arr3[j]=arr1[i];
                    }
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<"\n";
}

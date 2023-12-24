#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {


    ll n,m,i,j;
    cin>>n>>m;
    ll arr[n];
    ll arr1[m];
    for(i=0;i<m;i++)
    {
        arr1[i]=0;
    }
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        ll temp=arr[i]%m;
        arr1[temp]++;
    }
    i=1;
    j=m-1;
    ll c=0;
    if(arr1[0]>0)
    {
        c+=1;
    }
    while(i<=j)
    {
        ll min1=min(arr1[i],arr1[j]);
        if(min1==0)
        {
            c+=arr1[i];
            c+=arr1[j];
        }
        else
        {
            if(min1==arr1[i])
            {
                c+=1;
                arr1[j]=arr1[j]-arr1[i]-1;
                arr1[i]=0;
                if(arr1[j]>0)
                {
                    c+=arr1[j];
                }


            }
            else if(min1==arr1[j])
            {
                c+=1;
                arr1[i]=arr1[i]-arr1[j]-1;
                arr1[j]=0;
                if(arr1[i]>0)
                {
                    c+=arr1[i];
                }

            }
        }
     //   cout<<c<<endl;
        i++;
        j--;
    }
    cout<<c<<endl;

    }
}


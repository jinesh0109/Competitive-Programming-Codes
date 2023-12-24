#include<bits/stdc++.h>
#include<iostream>

using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        ll pre[n]={0},suf[n]={0};
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        pre[0]=arr[0];
        suf[n-1]=arr[n-1];
        for(i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+arr[i];
        }
        for(i=n-2;i>=0;i--)
        {
            suf[i]=suf[i+1]+arr[i];
            //cout<<suf[i]<<endl;
        }

        ll max1=0;
        ll j=n-1;
        i=0;
        while(i<j)
        {
            if(i==j)
            {
                if(pre[i]==suf[j+1])
                {
                    max1=max(max1,i+1+(n-j-1));
                    i++;
                    j--;
                }
                else if(pre[i]>suf[j])
                {
                    j--;
                }
                else{
                    i++;
                }
            }
            if(pre[i]==suf[j])
            {
                max1=max(max1,i+1+(n-j));
                i++;
                j--;
            }
            else if(pre[i]>suf[j])
            {
                j--;
            }
            else{
                i++;
            }
        }
        cout<<max1<<endl;




    }
}


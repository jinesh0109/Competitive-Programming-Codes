#include<bits/stdc++.h>
#include<string>
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
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll arr1[10]={0};
        for(i=0;i<n;i++)
        {

            ll ans1=arr[i]%10;

            arr1[ans1]+=1;
        }
        vector<int>v1;
        if(arr1[0]>=2)
        {
            v1.push_back(0);
            v1.push_back(0);
        }
        else if(arr1[0]==1)
        {
            v1.push_back(0);
        }
        for(i=1;i<=9;i++)
        {
            if(arr1[i]>=3)
            {
                v1.push_back(i);
                v1.push_back(i);
                v1.push_back(i);
            }
            else if(arr1[i]==2)
            {
                v1.push_back(i);
                v1.push_back(i);
            }
            else if(arr1[i]==1)
            {
                v1.push_back(i);

            }

        }
        //for(int kk=0;kk<v1.size();kk++)
            //cout<<v1[kk]<<" ";


        ll sum=0;
        int f=1;
        for(i=0;i<v1.size();i++)
        {
            for(int j=i+1;j<v1.size();j++)
            {
                for(int k=j+1;k<v1.size();k++)
                {
                    sum=v1[i]+v1[j]+v1[k];

                    if(sum>9)
                    {
                        sum=sum%10;
                    }
                    if(sum==3)
                    {
                        f=0;
                        break;
                    }
                }
                if(f==0)
                    break;
            }
            if(f==0)
                break;
        }
        if(f==1)
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

    }
}

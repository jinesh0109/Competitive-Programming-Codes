#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,i;
        cin>>n>>m;
        ll arr[n],arr1[m],s=0,s1=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            s+=arr[i];
        }

        for(i=0;i<m;i++)
        {
            cin>>arr1[i];
            s1+=arr1[i];
        }

        if(s>s1)
        {
            cout<<"0\n";
            continue;
        }
        sort(arr,arr+n);
        sort(arr1,arr1+m);
        ll j=m-1,temp,count1=0;
        for(i=0;i<min(n,m);i++)
        {
            if(arr1[j]>arr[i])
            {

                temp=arr1[j];
                arr1[j]=arr[i];
                arr[i]=temp;
                s-=arr1[j];
                s+=arr[i];
                s1-=arr[i];
                s1+=arr1[j];

                j--;
                count1++;
                if(s>s1)
                    break;
            }
            else{
                break;
            }
        }
        if(s>s1)
        {
            cout<<count1<<endl;
        }
        else{
            cout<<"-1\n";
        }


    }
}

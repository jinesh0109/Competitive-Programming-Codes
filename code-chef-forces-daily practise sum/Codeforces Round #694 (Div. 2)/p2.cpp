#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,i,j;
        cin>>n>>x;
        ll arr[n],arr1[n];
        ll sum=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        for(i=0;i<n;i++)
        {
            ll c=1,temp=arr[i];
            while(temp%x==0)
            {
                temp=temp/x;
                c++;
            }
            arr1[i]=c;
        }
        ll min1=1000000;
        for(i=0;i<n;i++)
        {
            min1=min(min1,arr1[i]);
        }
        //cout<<min1<<endl;
        int flag=1,p=1;
        for(i=0;i<min1;i++)
        {

            if(i!=min1-1)
            {
                for(j=0;j<n;j++)
                {
                    arr[j]=arr[j]/x;
                    sum+=arr[j]*pow(x,p);


                }
                p++;
                //cout<<sum<<endl;

            }
            else{

                for(j=0;j<n;j++)
                {
                    if(arr[j]%x==0)
                    {
                        arr[j]=arr[j]/x;
                        sum+=arr[j]*pow(x,p);
                    }
                    else{
                        break;
                    }
                }
            }

        }
        cout<<sum<<endl;
    }
}

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,i,j;
        cin>>n>>x>>y;
        int arr[n];
        ll max1=0,smax=0,min1=10000,smin=10000;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll s=0;

        int swap1=0;
        for(i=0;i<n;i++)
        {
            s+=arr[i];
            if(s>=x && s<=y)
            {
                break;
            }
            else if(s>y)
            {
                for(j=0;j<i;j++)
                {
                    if(arr[j]>max1)
                    {
                        max1=arr[j];
                    }
                    else if(arr[j]>smax && arr[j]<=max1)
                    {
                        smax=arr[j];
                    }
                }
                for(j=i+1;j<n;j++)
                {
                    if(arr[j]<min1)
                    {
                        min1=arr[j];
                    }
                    else if(arr[j]>=min1 && arr[j]<smin)
                    {
                        smin=arr[j];
                    }
                }
                s-=max1;
                s+=min1;
                swap1++;
                if(s>=x && s<=y)
                    break;
                else
                {
                    s-=smax;
                    s+=smin;
                    swap1++;
                    if(s>=x && s<=y)
                        break;
                    else
                        break;

                }

            }
        }
        cout<<swap1<<endl;

    }
}

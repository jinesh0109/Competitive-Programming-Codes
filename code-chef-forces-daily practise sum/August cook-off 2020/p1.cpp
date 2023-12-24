#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        int arr[n],c=1;
        long long int sum=0,c1=0;
        for(i=0;i<n;i++)
        {
           cin>>arr[i];
           if(arr[i]>k)
           {
               c=0;
           }
        }
        if(c==0)
        {
            cout<<"-1\n";
        }
        else{
            c1=1;
            for(i=0;i<n;i++)
            {
                if(sum+arr[i]<=k)
                {
                    sum+=arr[i];
                }
                else{
                    sum=0;
                    sum+=arr[i];
                    c1++;
                }
            }
            cout<<c1<<endl;
        }
    }
}

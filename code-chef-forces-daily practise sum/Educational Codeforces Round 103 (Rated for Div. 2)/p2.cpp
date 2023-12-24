#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        double a=((double)k)/100;
        ll sum=0;
        ll Coffsum=arr[0];

        for(i=1;i<n;i++)
        {
           // cout<<((double)arr[i])/((double)Coffsum)<<endl;
            if((double(arr[i])/((double)Coffsum))>a)
            {
                ll temp;
                if(arr[i]*100%k==0)
                {
                    temp=(arr[i]*100)/k;
                    ll sum1=temp-Coffsum;
                    sum+=sum1;
                    Coffsum+=sum1+arr[i];
                }
                else if(arr[i]*100%k!=0)
                {
                    temp=(arr[i]*100)/k+1;
                    ll sum1=temp-Coffsum;
                    sum+=sum1;
                    Coffsum+=sum1+arr[i];
                }
            }
            else{

                Coffsum=Coffsum+arr[i];
                }
                //cout<<Coffsum<<endl;


            //cout<<Coffsum<<endl;
        }
        cout<<sum<<endl;
    }
}

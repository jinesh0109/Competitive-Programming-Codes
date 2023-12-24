#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int arr[n],i,sum=0,j;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        int flag;
        for(i=n;i>0;i--)
        {

            if(sum%i==0)
            {
                flag=1;
                long long int s=sum/i,temp=0;
                for(j=0;j<n;j++)
                {
                    temp+=arr[j];
                    if(temp>s)
                    {
                        flag=0;
                        break;
                    }
                    else if(temp==s)
                    {
                        temp=0;
                    }
                }
                if(flag==1)
                {
                cout<<n-i<<endl;
                break;
                }
            }

        }

    }
}

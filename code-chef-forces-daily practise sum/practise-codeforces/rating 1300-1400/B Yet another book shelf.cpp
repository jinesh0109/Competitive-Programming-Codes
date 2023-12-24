#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        map<int,int> m;
        int flag=1,c=0,ans=0,flag1=1;
        for(i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                flag1=0;
                flag=0;
                if(flag1==0)
                {
                    ans+=c;
                    c=0;
                    flag1=1;
                }

            }
            else{
                if(flag==0)
                {
                    c++;
                }
            }
        }
        cout<<ans<<endl;

    }
}

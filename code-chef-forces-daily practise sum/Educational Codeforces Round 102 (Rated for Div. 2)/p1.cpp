#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d,i;
        cin>>n>>d;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int c=0,temp=arr[0]+arr[1];
        if(temp<=d)
        {
            cout<<"YES\n";
        }
        else{
            int flag=1;
            for(i=0;i<n;i++)
            {
                if(arr[i]>d)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }

    }
}

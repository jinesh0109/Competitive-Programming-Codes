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
        int arr[n],flag=1;
        int sum=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%n!=0)
        {
            cout<<"-1\n";
        }
        else{
                int c=0;
            for(i=0;i<n;i++)
            {
                if(arr[i]>sum/n)
                {
                    c++;
                }
            }
            cout<<c<<endl;
        }
    }
}

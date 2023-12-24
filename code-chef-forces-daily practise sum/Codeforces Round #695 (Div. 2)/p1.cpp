#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,j,ans;
        cin>>n;
        long long int arr[n];
        if(n==1)
        {
            cout<<"9\n";
        }
        else if(n==2)
        {
            cout<<"98\n";
        }
        else if(n==3)
        {
            cout<<"989\n";
        }
        else{

            cout<<"989";
            ans=0;
            for(i=3;i<n;i++)
            {
                cout<<ans;
                ans=(ans+1)%10;
            }
            cout<<"\n";
        }
    }
}

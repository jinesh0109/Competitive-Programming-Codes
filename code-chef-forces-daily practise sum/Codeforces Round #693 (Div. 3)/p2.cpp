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
        int c=0,c1=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
                c++;
            else
                c1++;
        }
        if(c%2==1)
        {
            cout<<"NO\n";
        }
        else if(c%2==0)
        {
            if(c==0)
            {
                if(c1%2==1)
                    cout<<"NO\n";
                else
                    cout<<"YES\n";
            }
            else{
                    cout<<"YES\n";
            }
        }


    }
}

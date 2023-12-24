
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n;i++)
        {
            ll t1;
            cin>>t1;
            string s;
            cin>>s;
            for(int j=0;j<t1;j++)
            {
                if(s[j]=='U')
                {
                    if(arr[i]==0)
                    {
                        arr[i]=9;
                    }
                    else{
                        arr[i]=(arr[i]-1);
                    }

                }
                else{
                    if(arr[i]==9)
                    {
                        arr[i]=0;
                    }
                    else{
                        arr[i]=(arr[i]+1);
                    }

                }

            }
        }
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

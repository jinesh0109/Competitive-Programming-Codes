#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        i=0;
        ll j=n-1;
        ll f=1,ans,f1=1;
        while(i<j)
        {

            if(f==1)
            {
                if(arr[i]!=arr[j])
                {
                    if(arr[i+1]==arr[j])
                    {
                        ans=arr[i];
                        f=0;
                        i+=2;
                        j--;
                    }
                    else if(arr[i]==arr[j-1])
                    {
                        ans=arr[j];
                        f=0;
                        j-=2;
                        i++;
                    }
                    else{
                        f1=0;
                        break;
                    }
                }
                else{
                    i++;
                    j--;
                }
            }
            else{
                if(arr[i]!=arr[j])
                {
                    if(arr[i]==ans )
                    {
                        i++;
                    }
                    else if(arr[j]==ans)
                    {
                        j--;
                    }
                    else{
                        f1=0;
                        break;
                    }
                }
                else{
                    i++;
                    j--;
                }
            }

        }
        if(f1)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

}

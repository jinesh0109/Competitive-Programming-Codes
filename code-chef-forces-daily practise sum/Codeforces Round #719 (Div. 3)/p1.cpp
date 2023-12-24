#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll arr[26];
        ll n,i;
        for(i=0;i<26;i++)
        {
            arr[i]=0;
        }

        cin>>n;
        string s;
        cin>>s;
        arr[s[0]-65]=1;
        int flag=1;
        for(i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                if(arr[s[i]-65]==1)
                {
                    flag=0;
                    break;
                }
                else{
                    arr[s[i]-65]=1;
                    //cout<<arr[s[i]-65]<<endl;
                }
            }
        }
        if(flag==1)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}

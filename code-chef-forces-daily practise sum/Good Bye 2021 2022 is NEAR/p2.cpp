#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll i;

        if(s[0]-97<s[1]-97 || n==1)
        {
            cout<<s[0]<<s[0]<<endl;
            continue;
        }
        else if(s[0]==s[1])
        {
            cout<<s[0]<<s[0]<<endl;
            continue;
        }
        int comp=s[0]-97;
        string ans;
        ans+=s[0];
        for(i=1;i<n;i++)
        {
            int comp1=s[i]-97;
            if(comp1<=comp)
            {
                ans+=s[i];
                comp=comp1;

            }
            else{
                break;
            }
        }
        string ans1=ans;
        reverse(ans.begin(),ans.end());
        ans1+=ans;
        cout<<ans1<<endl;
    }
}

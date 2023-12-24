#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    t=t*2;
    while(t--)
    {
        string s;
        cin>>s;

        ll i,sum=0;
        for(i=1;i<s.size();i++)
        {
            sum+=abs(s[i]-s[i-1]);
        }
        cout<<sum<<endl;
    }
}

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
        string s,s1;
        cin>>s;
        s1=s;
        sort(s.begin(),s.end());
        ll c=0,i;
        for(i=0;i<n;i++)
        {
            if(s[i]!=s1[i])
                c++;
        }
        cout<<c<<endl;
    }

}

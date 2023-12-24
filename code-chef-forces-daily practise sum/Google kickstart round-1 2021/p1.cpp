
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,tt;
    cin>>t;
    for(tt=1;tt<=t;tt++)

    {
        ll n,k,i,j;
        cin>>n>>k;
        string s;
        cin>>s;
        i=0;
        j=s.size()-1;
        ll c=0;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                c++;
            }
            i++;
            j--;
        }
        cout<<"Case #"<<tt<<": "<<abs(k-c)<<endl;
    }
}

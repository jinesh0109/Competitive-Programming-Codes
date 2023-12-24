#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,k;
    cin>>n>>k;
    string s="";
    ll i=0;
    while(i<k && s.size()<n)
    {
        s+=char(i+'a');
        for(ll j=i+1;j<k && s.size()<n; j++)
        {
            s+=char(i+'a');
            if(s.size()<n)
                s+=char(j+'a');
        }
        i++;
    }
    i=s.size();
    ll j=0;
    while(s.size()<n)
    {
        s+=s[(j)%i];
        j++;
    }
    cout<<s<<endl;
}

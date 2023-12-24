#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s,i;
        cin>>n>>s;

        ll m1;
        if(n%2==0)
        {
            m1=n-((n/2)-1);
        }
        else{
            m1=n-(n/2);
        }


        cout<<s/m1<<endl;
    }
}

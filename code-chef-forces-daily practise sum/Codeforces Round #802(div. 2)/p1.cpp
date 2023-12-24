#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll t=1;
    cin>>t;
    while(t--)
    {

        ll n,m;
        cin>>n>>m;
        ll sum=0;
        sum+=(m*(m+1))/2;
        for(int i=1;i<n;i++)
        {
            sum+=(i)*m+m;
        }
        cout<<sum<<endl;
    }
}

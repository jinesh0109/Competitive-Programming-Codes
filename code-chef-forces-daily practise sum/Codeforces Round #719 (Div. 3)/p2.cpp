#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        ll c=0;
        for(i=1;i<=9;i++)
        {
            ll temp=0;
            for(j=1;j<=9;j++)
            {
                if(temp*10+i<=n)
                {
                    c++;
                    temp=temp*10+i;
                }
                else{
                    break;
                }
            }
        }
        cout<<c<<endl;
    }
}

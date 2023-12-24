#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i;
        cin>>n>>k;
        if(k>3)
        {
            for(i=0;i<k-3;i++)
                cout<<"1 ";

            n=n-(k-3);
            k=3;
        }


        if(n%2==0)
        {
            ll n1=n/2;
            if(n1%2==1)
            {
                cout<<(n/2)-1<<" "<<(n/2)-1<<" "<<n-(2*(n/2-1))<<endl;
            }
            else{
                ll n1=n/2;
                cout<<n1<<" "<<n1/2<<" "<<n1/2<<endl;
            }
        }
        else{
            ll n1=n/2;
            cout<<n1<<" "<<n1<<" "<<n-2*n1<<endl;
        }

    }
}

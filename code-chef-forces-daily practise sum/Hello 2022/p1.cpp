#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll ans=1;
        if(n==1 )
        {

            cout<<"R\n";
            continue;
        }
        char arr[n][n];
        ll i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                arr[i][j]='.';
            }
        }
        ll n1;
        if(n%2==0)
        {
             n1=n/2;
        }
        else{
            n1=n/2+1;
        }
        if(n1 >=k)
        {
            j=0;

            for(i=0;i<n;i+=2)
            {
                if(k<=0)
                    break;
                arr[i][j]='R';
                j+=2;
                k--;
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    cout<<arr[i][j];
                }
                cout<<"\n";
            }
        }
        else{
            cout<<"-1\n";
        }
    }
}

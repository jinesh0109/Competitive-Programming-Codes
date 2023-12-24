#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        if(n%2==0)
        {
            for(i=1;i<=n;i=i+2)
            {
                cout<<i+1<<" "<<i<<" ";
            }
        }
        else{

            for(i=1;i<=n-3;i=i+2)
            {
                cout<<i+1<<" "<<i<<" ";

            }
            cout<<n-1<<" "<<n<<" "<<n-2;
        }
        cout<<"\n";
    }
}

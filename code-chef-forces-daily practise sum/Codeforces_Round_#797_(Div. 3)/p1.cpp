#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        /* code */
        ll n;
        cin>>n;
        if(n%3==0)
        {
            cout<<n/3<<" "<<(n/3)+1<<" "<<(n/3)-1<<endl;
        }
        else if(n%3==1)
        {
            cout<<n/3<<" "<<(n/3)+2<<" "<<(n/3)-1<<endl;
        }
        else{
            cout<<n/3+1<<" "<<(n/3)+2<<" "<<(n/3)-1<<endl;
        }

    }
    
}
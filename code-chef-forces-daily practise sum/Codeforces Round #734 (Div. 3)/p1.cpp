#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans1=n%3;
        if(ans1==0)
        {
            cout<<n/3<<" "<<n/3<<endl;
        }
        else if(ans1==1)
        {
            cout<<(n/3)+1<<" "<<n/3<<endl;
        }
        else{
            cout<<n/3<<" "<<(n/3)+1<<endl;
        }
    }
}

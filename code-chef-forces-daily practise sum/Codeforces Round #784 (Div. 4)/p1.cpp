#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n<=1399)
        {
            cout<<"Division 4\n";
        }
        else if(n>=1400 && n<=1599)
        {
            cout<<"Division 3\n";
        }
        else if(n>=1600 && n<=1899)
        {
            cout<<"Division 2\n";
        }
        else{
            cout<<"Division 1\n";
        }
    }
}

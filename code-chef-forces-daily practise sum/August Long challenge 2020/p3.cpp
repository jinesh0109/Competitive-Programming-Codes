#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        double a,b;
        cin>>a>>b;
        if(ceil(a/9)>=ceil(b/9))
        {
            cout<<"1 "<<ceil(b/9)<<endl;
        }
        else{
            cout<<"0 "<<ceil(a/9)<<endl;
        }

    }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        ll ydif1 = abs(y2-y1),ydif2 = abs(y3-y2);
        ll xdif1 = abs(x2-x1),xdif2 = abs(x3-x2);
        ll ydif3 = abs(y3-y1),xdif3 = abs(x3-x1);
        if((ydif1==0 && ydif2==0) || (xdif1==0 && xdif2==0) || (ydif1==0 && xdif2==0) || (ydif2==0 && xdif1==0) ||
          (ydif1==0 && xdif3==0) || (ydif2==0 && xdif3==0) || (ydif3==0 && xdif2==0) || (ydif3==0 && xdif1==0))
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}
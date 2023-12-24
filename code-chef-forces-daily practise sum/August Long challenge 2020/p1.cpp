#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll h,p,flag=1;
        cin>>h>>p;
        if(p>=h)
        {
            cout<<"1\n";
        }
        else{
            while(p>0)
            {
                h=h-p;
                p=p/2;
                if(p>=h)
                {
                    cout<<"1\n";
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<"0\n";
            }
        }

    }
}

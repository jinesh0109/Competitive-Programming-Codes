#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll r,b,d,i;
        cin>>r>>b>>d;
        ll min1=min(r,b),t1;
        if(min1==r)
        {
             t1;
            if(b%r==0)
            {
                t1=b/r;
            }
            else
                t1=b/r+1;
        }
        else{

            if(r%b==0)
            {
                t1=r/b;
            }
            else
                t1=r/b+1;
        }
        ll t2=d+1;
        if(t1>t2)
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}


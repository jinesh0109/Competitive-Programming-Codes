#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {

        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll f1,f2;
        if(a>b)
            f1=a;
        else
            f1=b;
        if(c>d)
            f2=c;
        else
            f2=d;

        if(f1==a)
        {
            if(f2==c)
            {
                if(f1<d || f2<b)
                {
                    cout<<"NO\n";
                }
                else{
                    cout<<"YES\n";
                    //return 0;
                }
            }
            else
            {
                if(f1<c || f2<b)
                {
                    cout<<"NO\n";
                    //return;
                }
                else{
                    cout<<"YES\n";
                    //return;
                }
            }
        }
        else
        {
            if(f2==c)
            {
                if(f1<d || f2<a)
                {
                    cout<<"NO\n";
                    //return;
                }
                else{
                    cout<<"YES\n";
                    //return;
                }
            }
            else
            {
                if(f1<c || f2<a)
                {
                    cout<<"NO\n";
                    //return;
                }
                else{
                    cout<<"YES\n";
                    //return;
                }
            }
        }

    }
}

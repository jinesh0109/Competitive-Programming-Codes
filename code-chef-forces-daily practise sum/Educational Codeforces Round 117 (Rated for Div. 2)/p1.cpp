#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll a1,b1,a=0,b=0,a2,b2;
        cin>>a1>>b1;
        ll t1=(a1+b1)/2,t2=0;
        if((a1+b1)%2==1)
        {
            cout<<"-1 -1\n";
            continue;
        }
        while(t1>=0)
        {
            if((abs(a1-t1)+abs(b1-t2))==((a1+b1)/2))
            {
                a2=t1;
                b2=t2;
                break;
            }
            else{
                t1--;
                t2++;
            }
        }
        cout<<a2<<" "<<b2<<endl;

    }
}

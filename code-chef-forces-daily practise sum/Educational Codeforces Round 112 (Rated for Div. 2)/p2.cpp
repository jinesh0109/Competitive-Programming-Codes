#include<bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        double w,h;
        cin>>w>>h;
        double x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        double w1,h1;
        cin>>w1>>h1;
        double t1=h1+y1,t2=h1+y2;
        if(h1<=y1 || h-y2>=h1 || w1<=x1 || w1<=w-x2)
        {
            cout<<0<<endl;
        }
        else if(h1+(y2-y1)>h && w1+(x2-x1)>w)
        {
            cout<<"-1"<<endl;
        }
        else{
            double ans=w*h;
            if(h1+y2-y1<=h)
            {
                ans=min(ans,abs(h1-y1));
                ans=min(ans,abs(h1-(h-y2)));
            }
            if(w1+x2-x1<=w)
            {
                ans=min(ans,abs(w1-x1));
                ans=min(ans,abs(w1-(w-x2)));
            }
            cout<<fixed<<setprecision(8)<<ans<<endl;
        }


    }
}

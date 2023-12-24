#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        ll ans=0,a,b;
        if(m==1)
        {
            cout<<n*x<<endl;
            continue;
        }
        else if(x*2<=y)
        {
            cout<<n*m*x<<endl;
            continue;
        }
        else if(x<y){
            a=x;
            b=y-x;
        }
        else if(x>=y){
            a=y;
            b=0;
        }
        if(n%2==1)
        {
            if(m%2==1)
            {
                ans=(((m/2+1)*a)+((m/2)*b))*(n/2+1)+((((m/2)*a)+((m/2+1)*b))*(n/2));
                cout<<ans<<endl;
            }
            else{
                ans=(m/2)*(a+b)*n;
                cout<<ans<<endl;
            }
        }
        else{
            if(m%2==1)
            {
                ans=((((m/2+1)*a)+((m/2)*b))*(n/2))+((((m/2)*a)+((m/2+1)*b))*(n/2));
                cout<<ans<<endl;
            }
            else{
                ans=(m/2)*(a+b)*n;
                cout<<ans<<endl;
            }
        }
    }
}

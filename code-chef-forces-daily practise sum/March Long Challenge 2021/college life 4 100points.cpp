#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll n,e,h,a,b,c;
ll maxPrice(ll n,ll e, ll h, ll a, ll b,ll c);

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        cin>>n>>e>>h>>a>>b>>c;

        ll cost;
        cost=maxPrice(n,e,h,a,b,c);

        if(cost==1e16)
        {
            cout<<"-1\n";
        }
        else{
            cout<<cost<<endl;
        }
    }
}

ll maxPrice(ll n,ll e, ll h, ll a, ll b,ll c)
{
    if(n<=0)
        return 0;

    ll finalAnswer=1e16;
    if(2*n<=e)
    {
        finalAnswer=min(finalAnswer,n*a);
    }
    if(3*n<=h)
    {
        finalAnswer=min(finalAnswer,n*b);
    }
    if(n<=e && n<=h)
    {
        finalAnswer=min(finalAnswer,n*c);
    }
    ll tt=1;
    if((h-n)/2>=1 && (h-n)/2>=n-e)
    {
        ll temp1;
        if(b<c)
        {
            temp1=min(n-1,(h-n)/2);
            finalAnswer=min(finalAnswer,temp1*(b-c)+n*c);
        }
        else{
            temp1=max(tt,n-e);
            finalAnswer=min(finalAnswer,temp1*(b-c)+n*c);
        }
    }
    if(e/2>=1 && e/2>=(3*n-h+2)/3)
    {
        ll temp1;
        if(a<b)
        {
            temp1=min(n-1,e/2);
            finalAnswer=min(finalAnswer,temp1*(a-b)+n*b);
        }
        else{
            temp1=max(tt,(3*n-h+2)/3);
            finalAnswer=min(finalAnswer,temp1*(a-b)+n*b);
        }
    }
    if(e-n>=1 && e+h>=2*n)
    {
        ll temp1;
        if(a<c)
        {
            temp1=min(n-1,e-n);
            finalAnswer=min(finalAnswer,temp1*(a-c)+n*c);
        }
        else{
            temp1=max(tt,n-h);
            finalAnswer=min(finalAnswer,temp1*(a-c)+n*c);
        }
    }
    if(n>=3 && e>=3 && h>=4)
    {
        finalAnswer=min(finalAnswer,a+b+c+maxPrice(n-3,e-3,h-4,a,b,c));
    }
    return finalAnswer;
}



#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k1,k2;
        cin>>n>>k1>>k2;
        int w,b;
        cin>>w>>b;
        if(w==0 && b==0)
        {
            cout<<"YES\n";
            continue;
        }
        int max1,max2,max3=0,max4,max5,max6=0;
        max1=k1/2+k2/2;
        max2=min(k1,k2)+(k1-min(k1,k2))/2+(k2-min(k1,k2))/2;
        max3=max(max1,max2);
        max4=(n-k1)/2+(n-k2)/2;
        max5=min(n-k1,n-k2)+(n-k1-min(n-k1,n-k2))/2+(n-k2-min(n-k1,n-k2))/2;
        max6=max(max4,max5);
        if(max3>=w && max6>=b)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}

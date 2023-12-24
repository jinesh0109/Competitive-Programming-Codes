#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n,i;
        cin>>n;
        long long int min1=1000000000,min2=1000000000;
        if(n==1)
            {
                cout<<"0\n";
                continue;
            }

           long long int ans1=(long long int)(sqrt(n));
           double ans2=n/((double)ans1);

        long long int ans=ans1+ceil(ans2)-2;
        cout<<ans<<endl;

    }
}

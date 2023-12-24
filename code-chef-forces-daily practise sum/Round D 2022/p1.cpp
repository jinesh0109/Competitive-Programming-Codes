#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        ll n,m,i;
        cin>>n>>m;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        double sum=0;
        for(i=n-1;i>=0;i--)
        {
            if(m==1)
                break;
            sum+=1.0*arr[i];
            m--;
        }

        int mid;
        if(i%2==0)
        {
            mid=i/2;
            sum+=1.0*arr[mid];
        }
        else{
            mid=i/2;
            sum+=(1.0*arr[mid]+1.0*arr[mid+1])/(1.0*2);

        }
        cout<<"Case #"<<tt<<": "<<fixed<<setprecision(12)<<sum<<endl;
    }

}

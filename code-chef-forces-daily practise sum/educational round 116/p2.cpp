#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i;
        cin>>n>>k;
        ll sum=1,count1=0;
        while(sum<=k)
        {
            if(sum>=n)
                break;
            count1++;
            sum=sum*2;
            if(sum>=n)
                break;
        }
        if(sum<n)
        {
            if((n-sum)%k!=0)
                count1+=((n-sum)/k)+1;
            else
                count1+=((n-sum)/k);
        }

        cout<<count1<<endl;
    }
}

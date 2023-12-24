#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i;
        cin>>n>>k;
        ll arr[n],max1=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            max1=max(max1,arr[i]);
        }
        if(k==0)
        {
            cout<<n<<endl;
            continue;
        }

        sort(arr,arr+n);
        int flag=1;
        ll temp;
        for(i=0;i<n;i++)
        {
            if(arr[i]!=i)
            {
                flag=0;
                temp=i;
                break;
            }
        }
        ll mex=temp;
        if(flag==0)
        {
            ll f;
            if((mex+max1)%2==0)
            {
                f=(mex+max1)/2;
            }
            else{
                f=(mex+max1)/2+1;
            }
            int flag1=1;
            for(i=0;i<n;i++)
            {
                if(arr[i]==f)
                {
                    flag1=0;
                    break;
                }
            }
            if(flag1==1)
            {
                cout<<n+1<<endl;
            }
            else{
                cout<<n<<endl;
            }
        }
        else{
            cout<<n+k<<endl;
        }
    }
}

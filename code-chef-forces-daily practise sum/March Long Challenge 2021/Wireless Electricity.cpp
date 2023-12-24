#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,m,i;
    cin>>n>>m;
    ll arr[n],arr1[n],arr2[m],arr3[m],arr4[m],arr5[m];
    for(i=0;i<n;i++)
    {
        cin>>arr[i]>>arr1[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>arr2[i]>>arr3[i]>>arr4[i]>>arr5[i];
    }

    for(i=0;i<m;i++)
    {
        ll diff1,diff2,diff3,diff4,diff5,diff6,diff7,diff8;
        diff1=abs(arr2[i]-(-1))+abs(arr3[i]-0);
        diff2=abs(arr4[i]-(-1))+abs(arr5[i]-0);
        //diff3=abs(arr2[i]-(0))+abs(arr3[i]-(-1));
        //diff4=abs(arr4[i]-(0))+abs(arr5[i]-(-1));
        diff5=abs(arr2[i]-(1000000+1))+abs(arr3[i]-1000000);
        diff6=abs(arr4[i]-(1000000+1))+abs(arr5[i]-1000000);
        //diff7=abs(arr2[i]-(1000000))+abs(arr3[i]-1000000+1);
        //diff8=abs(arr4[i]-(1000000))+abs(arr5[i]-1000000+1);
        ll ans= min(diff1,min(diff2,min(diff5,diff6)));
        ll t,t1;
        if(ans==diff1)
        {
             t=-1-arr2[i],t1=0-arr3[i];
        }
        else if(ans==diff2)
        {
             t=-1-arr4[i],t1=0-arr5[i];
        }

        else if(ans==diff5)
        {
             t=(1000000+1)-arr2[i],t1=(1000000)-arr3[i];
        }
        else if(ans==diff6)
        {
             t=(1000000+1)-arr4[i],t1=(1000000)-arr5[i];
        }

        cout<<t<<" "<<t1<<endl;

    }

}

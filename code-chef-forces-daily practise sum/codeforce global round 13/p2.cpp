#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,u,v,i;
        cin>>n>>u>>v;
        ll min2=min(2*v,u+v);
        ll min1=min(u,v);
        ll arr[n];
        int flag=1,flag1=1;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(i=1;i<n;i++)
        {
          if(abs(arr[i]-arr[i-1])!=0)
          {
              flag=0;
                if(abs(arr[i]-arr[i-1])>=2)
                {
                    flag1=0;
                }
          }
        }
        if(flag==1)
        {
            cout<<min2<<endl;
        }
        else if(flag==0 && flag1==1)
        {
            cout<<min1<<endl;
        }
        else{
            cout<<"0\n";
        }

    }

}

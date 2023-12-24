#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll n,q,i;
    cin>>n>>q;
    ll arr[n];
    ll c=0,c1=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            c1++;
        else
            c++;
    }
    for(i=0;i<q;i++)
    {
        ll temp,temp1;
        cin>>temp>>temp1;
        if(temp==1)
        {
            if(arr[temp1-1]==1)
            {
                c1--;
                c++;
                arr[temp1-1]=0;
            }
            else{
                c1++;
                c--;
                arr[temp1-1]=1;
            }
        }
        else{
            if(c1>=temp1)
            {
                cout<<"1\n";
            }
            else{
                cout<<"0\n";
            }
        }
    }
}

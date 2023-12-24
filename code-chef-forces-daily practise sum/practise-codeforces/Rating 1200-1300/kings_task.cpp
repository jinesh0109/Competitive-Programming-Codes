#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,i,j;
    cin>>n;
    ll arr[2*n];
    int flag=1;
    for(i=0;i<2*n;i++)
    {
        cin>>arr[i];
        if(arr[i]!=i+1)
        {
            flag=0;
        }

    }
    if(flag==1)
    {
        cout<<"0\n";
        continue;
    }
    ll temp;
    if(n%2==0)
    {
        temp=4;
        for(i=1;i<=temp;i++)
        {
            if(i%2==1)
            {

            }
        }
    }

}

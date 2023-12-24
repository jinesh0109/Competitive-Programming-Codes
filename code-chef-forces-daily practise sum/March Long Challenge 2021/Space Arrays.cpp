#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        ll s=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        sort(arr,arr+n);
        for(i=0;i<n;i++)
        {
            if(arr[i]<i+1)
            {
                if((abs(arr[i]-(i+1)))%2==1)
                {
                    s+=1;
                }
            }
            else if(arr[i]>i+1)
            {
                s=0;
                break;
            }

        }
        if(s%2==1)
        {
            cout<<"First\n";
        }
        else{
            cout<<"Second\n";
        }
    }

}

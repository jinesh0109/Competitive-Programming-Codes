#include<bits/stdc++.h>
#include<vector>
#define ll long long int
#include<iterator>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,i;
        cin>>n>>x;
        ll arr[n];

        ll max1=0;
        ll min1=0,s=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];

            max1+=ceil((double)arr[i]/(double)x);
            s+=arr[i];
            if(s%x==0)
            {
                min1+=ceil((double)s/(double)x);
                s=0;
            }

        }
        min1+=ceil((double)s/(double)x);


        cout<<min1<<" "<<max1<<endl;


    }
}

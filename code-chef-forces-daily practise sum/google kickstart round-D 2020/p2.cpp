#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,j;
        cin>>n;
        ll arr[n];
        for(j=0;j<n;j++)
            cin>>arr[j];
        int p=0,s=0,c=0;
        for(j=1;j<n;j++)
        {
            if(arr[j]>arr[j-1])
            {
                p++;
                s=0;
            }
            else if(arr[j]<arr[j-1])
            {
                s++;
                p=0;
            }
            if(p>3 )
            {
                c++;
                p=0;
            }
            else if(s>3)
            {
                c++;
                s=0;
            }
        }
        cout<<"Case #"<<i<<": "<<c<<endl;
    }
}

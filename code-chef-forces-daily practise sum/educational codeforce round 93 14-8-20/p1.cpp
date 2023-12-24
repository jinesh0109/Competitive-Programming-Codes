#include<bits/stdc++.h>
using namespace std;
#include<map>
#include<set>
#include<vector>
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(arr[0]+arr[1]<=arr[n-1])
        {
            cout<<"1 2 "<<n<<"\n"<<endl;
        }
        else{
            cout<<"-1\n";
        }
    }
}

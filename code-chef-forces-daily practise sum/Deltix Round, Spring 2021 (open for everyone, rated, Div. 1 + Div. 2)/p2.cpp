#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#include<vector>
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;

        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<3*n<<endl;
        for(i=0;i<n-1;i+=2)
        {
            cout<<"1 "<<i+1<<" "<<i+2<<endl;
            cout<<"2 "<<i+1<<" "<<i+2<<endl;
            cout<<"1 "<<i+1<<" "<<i+2<<endl;
            cout<<"2 "<<i+1<<" "<<i+2<<endl;
            cout<<"1 "<<i+1<<" "<<i+2<<endl;
            cout<<"2 "<<i+1<<" "<<i+2<<endl;
            
        }
        
        
    }
}
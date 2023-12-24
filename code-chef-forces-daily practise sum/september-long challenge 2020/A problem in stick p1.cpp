#include<bits/stdc++.h>
#define ll long long int
#include<unordered_map>
#include<iterator>
#include<set>
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

        set<ll>s;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];

            if(arr[i]!=0)
            {
                s.insert(arr[i]);
            }

        }

            cout<<s.size()<<endl;



    }

}

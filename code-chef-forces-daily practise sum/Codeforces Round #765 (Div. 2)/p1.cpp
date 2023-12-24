#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#include <iostream>
#include <bitset>

int main()
{

    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,l,i;
        cin>>n>>l;
        vector<vector<ll>> v;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        string binary[n];
        for(i=0;i<n;i++)
        {
            binary[i] = bitset<32>(arr[i]).to_string();
        }
        string s1="";
        for(i=0;i<32;i++)
        {
            ll c1=0;
            for(int j=0;j<n;j++)
            {
                if(binary[j][i]=='1')
                {
                    c1++;
                }
            }
            if(c1>n/2)
            {
                s1+='1';
            }
            else{
                s1+='0';
            }
        }
        ll num=stoi(s1,0,2);
        cout<<num<<endl;






    }
}

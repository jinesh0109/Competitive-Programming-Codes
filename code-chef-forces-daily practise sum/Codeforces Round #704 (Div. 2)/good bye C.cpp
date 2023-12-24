#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll arr[s.size()]={0};
        ll count1=0;
        for(i=1;i<n;i++)
        {
            ll temp=0;
            if(s[i]==s[i-1] && arr[i-1]==0)
            {
                temp=1;
                count1++;
            }
            if(i>2 && s[i]==s[i-2] && arr[i-2]==0)
            {
                temp=1;
                count1++;
            }
            arr[i]=temp;
        }
        cout<<count1<<endl;
    }
}
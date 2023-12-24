#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        long long int arr[n];
        map<long long int>m;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];


        }
        int flag=1;
        for(i=0;i<n;i++)
        {
            m[arr[i]]++;
            if(m[arr[i]>1)
            {
                flag=0;
                break;
            }
        }
        if(flag==0)cout<<"YES\n";
        else cout<<"NO\n";

    }
}

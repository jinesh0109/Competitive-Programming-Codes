#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n, target;
        cin>>n;
        cin >> target;
        vector<ll> arr(n);
        ll sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }
        ll want = target;
        ll ind = 0,sum11 = 0, maxi = 0;

        ll i = 0, j = 0;
        while (i < n && j < n)
        {
            sum11 += arr[j++];
            while (i < n && sum11 > want)
            {
            sum11 = sum11-arr[i++];
            
            }
            if (sum11 == want)
            {
            maxi = max(maxi, j - i);
            }
            
        }
        
        // return maxi==0?-1:n-maxi;
        if (maxi == 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << n - maxi << '\n';
        }        
        }
}

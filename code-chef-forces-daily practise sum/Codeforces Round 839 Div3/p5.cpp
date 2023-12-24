#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        ll c=0,a_cor=0,b_cor=0;
        ll a=0,b=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==(i+1) && arr[i]==(n-i))
            {

            }
            else if(arr[i]==(i+1))
            {
                a_cor++;
            }
            else if(arr[i]==(n-i))
            {
                b_cor++;
            }
            else{
                c++;
            }
        }
        b=a_cor;
        a=b_cor;
        if(a+c<=b)
        {
            cout<<"First\n";
        }
        else if(b+c<a)
        {
            cout<<"Second\n";
        }
        else{
            cout<<"Tie\n";
        }
        
        
    }
}
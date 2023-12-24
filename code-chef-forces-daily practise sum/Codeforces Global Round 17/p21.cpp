#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[200005];
bool check(ll i,ll j,ll n)
{
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            if(a[i]==n)
            {
                i++;
                continue;
            }
            else if(a[j]==n)
            {
                j--;
                continue;
            }
            else
                return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   ll t = 1;

   cin>>t;
   while(t--)
   {
        ll n,m;
        cin>>n;
        ll i;
        ll arr[n];
        for(i=0;i<n;i++)
        {

            cin>>arr[i];
        }

        ll j=n-1;
        i=0;
        if(n==1)
        {
            cout<<"YES\n";
            continue;
        }
        ll f3=1;
        while(i<j)
        {
            if(arr[i]!=arr[j])
            {
                ll ans=arr[i];
                ll t1=i+1;
                ll t2=j;
                ll f2=1;
                while(t1<t2)
                {
                    if(arr[t1]!=arr[t2])
                    {
                        if(arr[t1]==ans)
                        {
                            t1++;
                            continue;
                        }
                        else if(arr[t2]==ans)
                        {
                            t2--;
                            continue;
                        }
                        else
                        {
                            f2=0;
                            break;
                        }
                    }
                    t1++;
                    t2--;
                }
                if(f2==1)
                {
                    f3=1;
                    break;
                }

                ll ans1=arr[j];
                ll t11=i;
                ll t21=j-1;
                ll f21=1;
                while(t11<t21)
                {
                    if(arr[t11]!=arr[t21])
                    {
                        if(arr[t11]==ans1)
                        {
                            t11++;
                            continue;
                        }
                        else if(arr[t21]==ans1)
                        {
                            t21--;
                            continue;
                        }
                        else
                        {
                            f21=0;
                            break;
                        }
                    }
                    t11++;
                    t21--;

                }
                if(f21==1)
                {
                    f3=1;
                    break;
                }


                else
                {
                    f3=0;
                    break;
                }
            }
            i++;
            j--;
        }
        if(f3)
            cout<<"YES\n";
        else
            cout<<"NO\n";
   }
   return 0;
}

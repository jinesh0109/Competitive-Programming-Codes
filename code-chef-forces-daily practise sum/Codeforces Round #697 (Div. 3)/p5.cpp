#include<bits/stdc++.h>
#include<map>
#define ll long long int
using namespace std;

ll fact(ll N1);
ll M = 1e9+7;
ll nCr(ll N, ll r)
{
    return fact(N) / (fact(r) * fact(N - r));
}

// Returns factorial of n
ll fact(ll N1)
{
    ll res = 1;
    for (ll i = 2; i <= N1; i++)
        res = res * i%M;
    return res;
}




int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        int arr[n],arr1[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            arr1[i]=0;
        }
        map<ll,ll>m;
        sort(arr,arr+n);
        int c=1;

        arr1[n-1]=1;
        for(i=n-2;i>=0;i--)
        {
            if(arr[i]==arr[i+1])
            {
                arr1[i]=c;
            }
            else if(arr[i]<arr[i+1])
            {
                c++;
                arr1[i]=c;
            }
        }
        for(i=0;i<n;i++)
        {
        //    cout<<arr1[i]<<" ";
            m[arr1[i]]++;
        }
        //cout<<"\n";
        auto it1=m.begin();
        while(it1!=m.end())
        {
           cout<<(*it1).first<<" "<<(*it1).second<<"\n";
          it1++;
        }
        ll ans=0;
        int flag=1;
        auto it=m.begin();
        while(it!=m.end())
        {

            if((*it).second<=k)
            {

                k-=(*it).second;
            }
            else{

                flag=0;
               ans=(ans+(nCr((*it).second,k)))%M;
               cout<<ans<<endl;
               break;
            }
            if(k<=0)
                break;
            it++;
        }
        if(flag==1)
            cout<<"1\n";
        else
            cout<<ans<<endl;


    }
}

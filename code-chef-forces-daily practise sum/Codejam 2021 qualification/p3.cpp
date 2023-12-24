#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll cost(ll arr[], ll n)
{

        ll ans=0,i,j;
        ll z[n];
        for(i=0;i<n;i++)
        {
            z[i]=arr[i];
        }
        for(i=0;i<n-1;i++)
        {
            pair<ll,ll> p=make_pair(z[i],i);
            for(j=i+1;j<n;j++)
            {
                if(z[j]<p.first){
                    p=make_pair(z[j],j);
                }
            }
            int end=((p.second));

            for(j=0;j<=(p.second-i)/2;j++){
                ll atemp1=z[j+i],atemp2=z[end];
                z[j+i]=atemp2;
                z[end]=atemp1;
                end--;
            }

            ans+=(p.second-i+1);

        }
        return ans;

}

ll* findPermutations(ll arr[], ll n,ll givenCost)
{
   sort(arr,arr+n);
   ll count=0;

    do {
        ll c=cost(arr, n);
        if(c==givenCost){
            return arr;
        }
    } while (next_permutation(arr, arr + n));
    return NULL;
}


int main() {

      ll t,tt;
      cin>>t;
      for(int tt=1;tt<=t;tt++){
        ll n,c,i;
        cin>>n>>c;

        ll arr[n];
        for(i=0;i<n;i++)
        {
            arr[i]=i+1;
        }

        //int temp[n];
        //temp[0]=-1;

        ll *ans;
        ans=findPermutations(arr,n,c);


        cout<<"Case #"<<tt<<": ";
        if(ans==NULL)
        {
            cout<<"IMPOSSIBLE\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

   }

}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#include<vector>


int main() {

      ll t;
      cin>>t;
      for(int tt=1;tt<=t;tt++){
        ll n;
        cin>>n;
        vector<ll> v,v1;

        ll i,j;
        for(i=0;i<n;i++) {
            ll t1;
            cin>>t1;
            v.push_back(t1);
        }
        for(i=0;i<n;i++){
            v1.push_back(v[i]);
        }
        ll ans=0;
        for(i=0;i<n-1;i++){
            pair<ll,ll> p = make_pair(v[i],i);
            for(j=i+1;j<n;j++){
                if(v[j]<p.first){
                    p=make_pair(v[j],j);
                }
            }
            ll end=((p.second));

            for(j=0;j<=(p.second-i)/2;j++){
                ll atemp1=v[j+i],atemp2=v[end];
                v[j+i]=atemp2;
                v[end]=atemp1;
                end--;
            }

            ans+=(p.second-i+1);

        }



 cout<<"Case #"<<tt<<": "<<abs(ans)<<"\n";



   }
}

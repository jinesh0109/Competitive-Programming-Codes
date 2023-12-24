#include<bits/stdc++.h>
typedef long long ll;
#define forp(i,t) for(int i=0;i<t;i++)
#define forn(i,t) for(int i=t;i>=0;i--)
#define deb(x) cout<< #x <<" = "<<x<<endl
#define all(x) x.begin(),x.end()
/*#define vector<int> vi;
#define pair<int,int> pii;
#define vector<ll> vl;
#define pair<ll,ll> pll;*/
const int mod = 1e9 + 7;

bool is_prime(ll);

using namespace std;
ll ncr (ll n, ll r){
    if(r == 3){
        return (n*(n-1)*(n-2))/(6);
    }
    else if(r == 2){
        return (n*(n-1))/2;
    }
    else{
        return n;
    }
}
void solve(){
    //CODE HERE
    ll n;
    cin>>n;
    ll a[n];
    forp(i,n){
        cin>>a[i];
    }
    if(n<3){
        cout<<0<<endl;
        return;
    }
    ll cnt[n] = {0};
    forp(i,n){
        cnt[a[i] - 1]++;
    }
    ll ans = 0;
    // cout<<endl;
    // forp(i,n){
    //     cout<<cnt[i]<<" ";
    // }
    forp(i,n-2){
        //if(i<n-2){
            if(cnt[i] >= 3)ans+=ncr(cnt[i],3);
            if(cnt[i+1] > 0 && cnt[i] >=2)ans+=ncr(cnt[i],2)*cnt[i+1];
            if(cnt[i+2] > 0 && cnt[i]>=2)ans+=ncr(cnt[i],2)*cnt[i+2];
            if(cnt[i+1]>1 && cnt[i]>=1)ans+=ncr(cnt[i],1)*ncr(cnt[i+1],2);
            if(cnt[i+2]>1 && cnt[i]>=1)ans+=ncr(cnt[i],1)*ncr(cnt[i+2],2);
            if(cnt[i]>0 && cnt[i+1] > 0 && cnt[i+2] > 0)ans+=ncr(cnt[i],1)*ncr(cnt[i+1],1)*ncr(cnt[i+2],1);
        //}
        // else if(i<n-1){
        //     if(cnt[i] >= 3)ans+=ncr(cnt[i],3);
        //     if(cnt[i+1] > 0 && cnt[i] >=2)ans+=ncr(cnt[i],2)*cnt[i+1];
        //     if(cnt[i+1]>1 && cnt[i]>=1)ans+=ncr(cnt[i],1)*ncr(cnt[i+1],2);
        // //}
        // else{
        //     if(cnt[i] >= 3)ans+=ncr(cnt[i],3);
        // }
    }
    int i = n-2;
    if(cnt[i] >= 3)ans+=ncr(cnt[i],3);
    if(cnt[i+1] > 0 && cnt[i] >=2)ans+=ncr(cnt[i],2)*cnt[i+1];
    if(cnt[i+1]>1 && cnt[i]>=1)ans+=ncr(cnt[i],1)*ncr(cnt[i+1],2);
    i = n-1;
    if(cnt[i] >= 3)ans+=ncr(cnt[i],3);
    cout<<ans<<"\n";

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

bool is_prime(ll n){
    if (n == 1) {
        return false;
    }
    int i = 2;
    while (i*i <= n) {
        if (n % i == 0) {
            return false;
        }
        i += 1;
    }
    return true;
}


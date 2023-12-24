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
void solve(){
    //CODE HERE
    int n;
    cin>>n;
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int b1,b2,b3;
    cin>>b1>>b2>>b3;
    int maxi = min(a1,b2) + min(a2,b3)+min(a3,b1);
    //int maxb = min(b1,a2) + min(b2,a3) + min(b3,a1);
    int ans2 = n-(min(a1,b1+b3) + min(a2,b2+b1) + min(a3,b2+b3));
    cout<<ans2<<" "<<maxi<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
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

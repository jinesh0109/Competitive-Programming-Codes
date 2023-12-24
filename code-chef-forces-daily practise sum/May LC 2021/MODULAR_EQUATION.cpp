#include<bits/stdc++.h>
#define ll long long int
#include<vector>
using namespace std;
vector<ll>v[1000001];
vector<ll> v1;
void printDivisors(ll n)
{

    v1.clear();
	for (ll i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {


			if (n / i == i)

				v1.push_back(i);
			else {



				v1.push_back(i);
				v1.push_back(n / i);
			}
		}
	}


	sort(v1.begin(),v1.end());
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j,b;
        cin>>n>>m;
        ll c=0;
        for(b=2;b<=n;b++)
        {
            ll value=m-m%b;
            if(b>m)
            {
                c+=b-1;
                continue;
            }
            if(v[value].size()==0)
            {
                printDivisors(value);
                for(ll jj=0;jj<v1.size();jj++)
                    v[value].push_back(v1[jj]);
            }



            auto upper=lower_bound(v[value].begin(),v[value].end(),b);
            ll ans=upper-v[value].begin();
            //cout<<"b value "<<b<<" and ans "<<ans<<" "<<endl;
            c+=ans;
            //v1.clear();

        }

        cout<<c<<endl;
    }
}


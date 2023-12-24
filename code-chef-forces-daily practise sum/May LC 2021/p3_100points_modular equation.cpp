#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int
#define N 1000000

vector<ll>v;
ll arr1[1000001]={0};

void SieveOfEratosthenes(ll n)
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (ll p = 2; p * p <= n; p++)
	{
		if (prime[p] == true)
		{
			for (ll i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}


	for (ll p = 2; p <= n; p++)
		if (prime[p])
			v.push_back(p);
}

int main()
{
    ll t;
    SieveOfEratosthenes(N);
    cin>>t;
    while(t--)
    {
        ll n,m,i,j,k;
        cin>>n>>m;
        ll c=0;
        for(i=2;i<=n;i++)
        {
            ll value=m-m%i;
            cout<<"b value "<<i<<" m-m%b value "<<value<<"\n";
            //if(arr1[value]!=0)
            //{
            //    c+=arr1[value];
            //    continue;
           // }
           if(i>m)
           {
               c+=(i-1);
               cout<<"hell yeah case "<<i-1<<endl;
               continue;
           }
            ll count1=1;
            ll check=0;
            for(j=0;j<=sqrt(value)+1;j++)
            {
                cout<<"j : "<<j<<endl;
                if(v[j]>=i)
                    break;
                if(value%v[j]==0)
                {
                    cout<<v[j]<<" ";
                    ll t1=0;
                    for(k=1;k<=20;k++)
                    {
                        if(value%(v[j]*k)==0 && (v[j]*k)<i)
                        {
                           t1++;
                            cout<<"hou sum\n";
                        }
                        else{
                            cout<<"nahi hua\n";
                            break;
                        }
                    }
                    count1=count1*(t1+1);
                    if(t1>=1)
                    {
                        check++;
                    }
                }
            }

            if(check>1)
            {
                count1--;
            }
            cout<<"count for value "<<value<<"  is: "<<count1<<" "<<endl;
            //arr1[value]=count1;
            c+=count1;
        }
        cout<<c<<endl;
    }
}

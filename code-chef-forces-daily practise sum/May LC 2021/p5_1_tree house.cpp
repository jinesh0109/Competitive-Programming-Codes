#include <bits/stdc++.h>
#define ll long long int
#define F(i,a,b) for(long long i=a;i<b;i++)
#define pb push_back
#define ff first
#define ss second
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()

const int mod = 1e9 + 7;

using namespace std;

 vector<ll>v[300005];
 ll vis[300005],sub[300005];
ll dfs(ll n)
{
   vis[n]=1;
   if(n!=1&&v[n].size()==1)
   {
      return sub[n]=0;
   }
   for(auto x : v[n])
   {
      if(vis[x]!=1)
      {
         sub[n]+=dfs(x)+1;
      }
   }
   return sub[n];
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
	ll test = 1;
	cin>>test;
	while(test--)
	{
	   ll n,x;
	   cin>>n>>x;
	   F(i,0,n-1)
	   {
	      ll x1,y1;
	      cin>>x1>>y1;
	      v[x1].pb(y1);
	      v[y1].pb(x1);
	   }
	   F(i,1,n+1)
	   {
	      vis[i]=0;
	      sub[i]=0;
	   }
	   ll ans=dfs(1);
	   F(i,1,n+1)
	      vis[i]=0;
	   ll ans1[n+1]={0};
	   ans1[1]=x;
	   list<ll>queue;
	   queue.pb(1);
	   vis[1]=1;
	   while(!queue.empty())
	   {
	      ll a1=*queue.begin();
	      queue.pop_front();
	      vector<pair<ll,ll>>v1;
	      for(auto x : v[a1])
	      {
	         if(!vis[x])
	         {
	            v1.pb({sub[x],x});
	            vis[x]=1;
	            queue.pb(x);
	         }
	      }
	      sort(all(v1));
	      cout<<"parent node "<<a1<<endl;
            for(auto it2: v1)
            {
                cout<<it2.first<<" "<<it2.second<<endl;
            }
	      ll i=v1.size();
	      for(auto x : v1)
	      {
	         ans1[x.ss]=i*ans1[a1];
	         i--;
	      }
	   }
	   ans=0;
	   F(i,1,n+1)
	   {
	      ans+=ans1[i];
	      cout<<ans1[i]<<" ";
	   }
	   //1 1 2 1 1 3 2 1 1 1
	   cout<<endl;
	  cout<<ans<<endl;
	  F(i,1,n+1)
	   v[i].clear();
	}
	return 0;
}

#include<bits/stdc++.h>
#define mod 1000000007
#define pb push_back
#define ll long long int
using namespace std;

vector<ll> tree[300001];
ll sub[300001],visited[300001];


void dfs(ll node , ll par)
{
	sub[node] = 0;

	for(ll child : tree[node])
    {
        if(child != par)
        {
            dfs(child , node);
            sub[node] += sub[child]+1;
        }
    }
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,i,x;
        cin>>n>>x;
        for(i=1;i<=n-1;i++)
        {
            cin>>a>>b;
            tree[a].pb(b);
            tree[b].pb(a);
        }
        dfs(1,-1);
        ll store[n+1];
        for(i=1;i<=n;i++)
        {
            visited[i]=0;
            store[i]=0;
        }
        //for(i=0;i<n;i++)
        //{
        //    cout<<"tree["<<i<<"]: ";
        //    for(auto child:tree[i])
        //    {
        //        cout<<child<<" ";
        //    }
        //    cout<<"\n";
       // }

        store[1]=x;
        list<ll> queue;
        queue.pb(1);
        visited[1]=1;
        while(!queue.empty())
        {
            ll front_value= *queue.begin();
            queue.pop_front();
            vector<pair<ll,ll>>v;
            for(auto it:tree[front_value])
            {
                if(visited[it]!=1)
                {
                    v.pb({sub[it],it});
                    visited[it]=1;
                    queue.pb(it);
                }
            }
            sort(v.begin(),v.end());
            //cout<<"parent node "<<front_value<<endl;
            for(auto it2: v)
            {
                //cout<<it2.first<<" "<<it2.second<<endl;
            }
            ll mul=v.size();
            for(auto it1: v)
            {
                store[it1.second]=((mul*store[front_value])%mod);
                mul--;
            }

        }
        ll final_ans=0;
            for(i=1;i<=n;i++)
            {
                final_ans=(final_ans+store[i])%mod;
                //cout<<store[i]<<" ";
            }
            //cout<<endl;
            for(i=0;i<=n;i++)
            {
                tree[i].clear();
            }

            cout<<final_ans<<endl;

    }

}

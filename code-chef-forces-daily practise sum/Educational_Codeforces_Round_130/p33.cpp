#include <bits/stdc++.h>
#define ll long long int
#define F(i,a,b) for(long long i=a;i<b;i++)
#define pb push_back
#define ff first
#define ss second
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(v) v.begin(), v.end()
#define endl '\n'
int mod = 1e9 + 7;
 
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
  
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

void solve()
{
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    map<char,set<ll>>m;
    F(i,0,n)
        m[s1[i]].insert(i);
    F(i,0,n)
    {
        if(s1[i]!=s2[i])
        {
            if(s1[i]=='a'&&s2[i]=='b')
            {
                if(m['b'].size()==0)
                {
                    no;
                    return;
                }
                if(m['c'].size())
                {
                    if(*m['c'].begin()<*m['b'].begin())
                    {
                        no;
                        return;
                    }
                    else
                    {
                        int ind=*m['b'].begin();
                        m['b'].erase(m['b'].begin());
                        m['a'].insert(ind);
                        s1[ind]='a';
                    }
                }
                else
                {
                        int ind=*m['b'].begin();
                        m['b'].erase(m['b'].begin());
                        m['a'].insert(ind);
                        s1[ind]='a';
                }
            }
            else if(s1[i]=='b'&&s2[i]=='c')
            {
                if(m['c'].size()==0)
                {
                    no;
                    return;
                }
                if(m['a'].size())
                {
                    if(*m['a'].begin()<*m['c'].begin())
                    {
                        no;
                        return;
                    }
                    else
                    {
                        int ind=*m['c'].begin();
                        m['c'].erase(m['c'].begin());
                        m['b'].insert(ind);
                        s1[ind]='b';
                    }
                }
                else
                {
                        int ind=*m['c'].begin();
                        m['c'].erase(m['c'].begin());
                        m['b'].insert(ind);
                        s1[ind]='b';
                }
            }
            else
            {
                no;
                return;
            }
        }
        m[s1[i]].erase(m[s1[i]].begin());
    }
    yes;
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
	ll test = 1;
	cin>>test;
	F(i,1,test+1)
    {
        //cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}

//1 2 3 5 5
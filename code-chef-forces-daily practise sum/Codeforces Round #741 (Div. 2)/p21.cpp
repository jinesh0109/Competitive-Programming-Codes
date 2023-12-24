#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i;
	    cin>>n;
	    string s;
	    cin>>s;
	    ll a[10]={0};
	    for(i=0;i<n;i++)
	    {
	        a[s[i]-'0']++;
	    }
	    if(a[1])
	    {
	        cout<<1<<endl;
	        cout<<1<<endl;
	        continue;
	    }
	    if(a[9])
	    {
	        cout<<1<<endl;
	        cout<<9<<endl;
	        continue;
	    }
	    if(a[8])
	    {
	        cout<<1<<endl;
	        cout<<8<<endl;
	        continue;
	    }
	    if(a[6])
	    {
	        cout<<1<<endl;
	        cout<<6<<endl;
	        continue;
	    }
	    if(a[4])
	    {
	        cout<<1<<endl;
	        cout<<4<<endl;
	        continue;
	    }
	    if((a[5]==1&&s[0]!='5')||(a[5]>1))
	    {
	        cout<<2<<endl;
	        cout<<s[0]<<5<<endl;
	        continue;
	    }
	    if((a[2]==1&&s[0]!='2')||(a[2]>1))
	    {
	        cout<<2<<endl;
	        cout<<s[0]<<2<<endl;
	        continue;
	    }
	    if(a[3]>1)
	    {
	        cout<<2<<endl;
	        cout<<33<<endl;
	        continue;
	    }

	    if(a[7]>1)
	    {
	        cout<<2<<endl;
	        cout<<77<<endl;
	        continue;
	    }
	    if(a[2]==1)
	    {
	        if(a[7])
	        {
	            cout<<2<<endl;
	            cout<<27<<endl;
	            continue;
	        }
	    }
	    if(a[5]==1)
	    {
	        if(a[7])
	        {
	            cout<<2<<endl;
	            cout<<57<<endl;
	            continue;
	        }
	    }
	    if(a[8]==1)
	    {
	        if(a[7])
	        {
	            cout<<2<<endl;
	            cout<<87<<endl;
	            continue;
	        }
	    }

    }
}


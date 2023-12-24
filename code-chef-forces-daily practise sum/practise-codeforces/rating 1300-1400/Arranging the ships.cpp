#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{

	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,i,j;
	    cin>>n;
	    ll arr[n],k=0;
	    string s;
	    cin>>s;
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='*')
            {
                arr[k]=i;
                k++;
            }

	    }
	    if(k%2==1)
	    {
	        ll ans=0,j=arr[k/2]+1;
	        for(i=k/2+1;i<k;i++)
	        {
	            ans+=arr[i]-j;
	            j++;
	        }
	        j=arr[k/2]-1;
	        for(i=0;i<k/2;i++)
	        {
	            ans+=j-arr[i];
	            j--;
	        }
	        cout<<ans<<endl;

	    }
	    else
	    {
	        ll ans=0,j=arr[k/2]+1;
	        for(i=k/2+1;i<k;i++)
	        {
	            ans+=arr[i]-j;
	            j++;
	        }
	        j=arr[k/2]-1;
	        for(i=0;i<k/2;i++)
	        {
	            ans+=j-arr[i];
	            j--;
	        }
	        j=arr[k/2-1]+1;
	        ll ans1=0;
	        for(i=k/2;i<k;i++)
	        {
	            ans1+=arr[i]-j;
	            j++;
	        }
	        j=arr[k/2-1]-1;
	        for(i=0;i<k/2-1;i++)
	        {
	            ans1+=j-arr[i];
	            j--;
	        }
	        ans=min(ans,ans1);
	        cout<<ans<<endl;
	    }
	}


}

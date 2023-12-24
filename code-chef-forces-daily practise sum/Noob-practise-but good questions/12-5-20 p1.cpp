#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,l;
	cin>>t;
	for(l=0;l<t;l++)
	{
		int i;
		long long int d,n;
		cin>>n>>d;
		long long int arr[n];
		
		long long int max=0;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];	
			if(arr[i]>max)
			{
				max=arr[i];
			}
		}
		long long int x;
		if(d>=max)
		{
		     x=d;
		}
		else{
			x=max;
		}
			long long int arr1[x];
		
		for(i=0;i<n;i++)
		{
			arr1[arr[i]-1]++;
		}
		
		int c=1;
		for(i=x-1;i>=0;i--)
		{
			if(arr1[i]>0 && i+1<d)
			{
				long long int difference=d-(i+1);
				if(i+1==difference)
				{
					if(arr1[i]>=2)
					{
						cout<<"YES\n";
						c=0;
						break;
					}
					else{
						continue;
					}
				}
				if(arr1[difference-1]>0)
				{
					cout<<"YES\n";
					c=0;
					break;
				}
			}
		}
			if(c==1)
			cout<<"NO\n";
		
		
	}
	return 0;
}

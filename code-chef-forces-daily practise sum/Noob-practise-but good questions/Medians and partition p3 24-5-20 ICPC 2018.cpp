#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int n,m,i;
	cin>>n>>m;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int nos=1,yes=0,c=1;
	if(n%2!=0)
	{
		n=n+1;
		c=0;
	}
	for(i=0;i<n/2;i++)
		{
			if(arr[i]<m)
			{
				nos=2*(i+1)+1;
			}
			else{
				if(c==1)	
				yes=n-nos+1;
				else
				yes=n-nos;
			}
		}
	cout<<yes;
	
	
}

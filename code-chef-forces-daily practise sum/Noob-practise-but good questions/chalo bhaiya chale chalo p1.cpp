#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,l;
	cin>>t;
	for(l=0;l<t;l++)
	{
		long long int n,d,i;
		cin>>n>>d;
		long long int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int c=1;
		long long int l=0,r=n-1;
		while(l<r)
		{
		 	if(arr[l]+arr[r]==d)	
		 	{
		 		cout<<"Yes"<<endl;
		 		c=0;
		 		break;
			 }
			 else if(arr[l]+arr[r]>d)
			 {
			 	r--;
			 }
			 else{
			 	l++;
			 }
		}
		if(c==1)
		{
			cout<<"No"<<endl;
		}
		
	}
	return 0;
}

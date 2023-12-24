#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	long long int arr[2*n],sum=0;
	for(i=0;i<2*n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	sort(arr,arr+2*n);
	if(arr[0]*2*n==sum)
	{
		cout<<"-1";
	}
	else{
		for(i=0;i<2*n;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	return 0;
}

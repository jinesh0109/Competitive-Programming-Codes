#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j;
	cin>>n;
	long long int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	long long int max=0;
	for(i=0;i<n;i++)
	{
		if((n-i)*arr[i]>max)
		{
			max=(n-i)*arr[i];
		}
	}
	cout<<max;
	return 0;
}

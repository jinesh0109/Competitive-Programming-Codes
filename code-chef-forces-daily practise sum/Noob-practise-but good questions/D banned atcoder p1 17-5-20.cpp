#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,i,j;
	cin>>n;
	long long int arr[n],max=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>max)
		max=arr[i];
		
	}
	long long int arr1[max];
	for(i=0;i<max;i++)
	{
		arr1[i]=0;
	}
	
	for(i=0;i<n;i++)
	{
		arr1[arr[i]-1]++;
	}
	
	long long int total=0;
	for(i=0;i<max;i++)
	{
		total=total+(arr1[i]*(arr1[i]-1))/2;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<total-(arr1[arr[i]-1]-1)<<endl;
	}
	return 0;
}

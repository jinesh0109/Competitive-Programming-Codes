#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i;
		cin>>n>>k;
		int arr[n],arr1[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>arr1[i];
		}
		sort(arr,arr+n);
		sort(arr1,arr1+n);
		int l=0,r=n-1,temp;
		for(i=0;i<k;i++)
		{
			if(arr1[r]>=arr[l])
			{
				temp=arr[l];
				arr[l]=arr1[r];
				arr1[r]=temp;
				l++;
				r--;
			}
			else{
				break;
			}
		}
		int sum=0;
		for(i=0;i<n;i++)
		{
			sum=sum+arr[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}

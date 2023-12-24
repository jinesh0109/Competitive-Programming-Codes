#include<iostream>
#define ll long long 

using namespace std;
int main()
{
		ll int n,k,i;
		cin>>n>>k;
		ll int arr[n],arr1[n],arr2[100000],arr3[100000];
		for(i=0;i<100000;i++)
		{
			arr2[i]=0;
			arr3[i]=0;
		}
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			
		}
		for(i=0;i<n;i++)
		{
			cin>>arr1[i];
			
		}
		ll int c=0,c1=0;
		for(i=0;i<n;i++)
		{
			if(arr[i]<k && arr2[k-arr[i]-1]>0)
			{
				c=c+arr2[k-arr[i]-1];
			}
			arr2[arr[i]-1]++;
			if(arr1[i]<k && arr3[k-arr1[i]-1]>0)
			{
				c1=c1+arr3[k-arr1[i]-1];
			}
			arr3[arr1[i]-1]++;
		}
		if(c>c1)
		{
			cout<<"MAHMOUD";
			
		}
		else if(c1>c)
		{
			cout<<"BASHAR";
		}
		else{
			cout<<"DRAW";
		}
}

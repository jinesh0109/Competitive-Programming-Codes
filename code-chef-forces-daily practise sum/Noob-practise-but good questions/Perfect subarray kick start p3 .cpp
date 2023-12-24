#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,z;
	cin>>t;
	for(z=0;z<t;z++)
	{
		long long int n,i,j;
		cin>>n;
		long long int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		long long int c=0;
		for(i=0;i<n;i++)
		{
			long long int sum=arr[i];
			if(arr[i]==0)
			{
				c++;
			}
			else if(arr[i]>0)
			{
				double s=sqrt((double)(arr[i]));
				if(s-(long long int)(s)==0)
				{
					c++;
				}
			}
			for(j=i+1;j<n;j++)
			{
				sum=sum+arr[j];
				if(sum==0)
				{
					c++;
				}
				else if(sum>0)
				{
					double s1=sqrt((double)(sum));
					if(s1-(long long int)(s1)==0)
					{
						c++;
					}	
				}
			}
		}
		cout<<"Case #"<<z+1<<": "<<c<<endl;
	}
	return 0;
}

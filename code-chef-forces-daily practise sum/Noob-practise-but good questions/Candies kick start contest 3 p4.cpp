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
		long long int n,q,i,j;
		cin>>n>>q;
		long long int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		long long int sum=0;
		
		for(i=0;i<q;i++)
		{
			char c;
			long long int l,r;
			cin>>c>>l>>r;
			if(c=='U')
			{
				arr[l-1]=r;
			}
			else if(c=='Q')
			{
			double x=1;		
				for(j=l-1;j<r;j++)
				{
					sum=sum+(pow((double)-1,x-1))*arr[j]*x;
					x++;
				}
				
			}
		}
		cout<<"Case #"<<z+1<<": "<<sum<<endl;
	}
	return 0;
}

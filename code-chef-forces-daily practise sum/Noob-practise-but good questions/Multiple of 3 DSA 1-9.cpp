#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,l;
	cin>>t;
	for(l=0;l<t;l++)
	{
		long long int k,i;
		int d0,d1;
		cin>>k>>d0>>d1;
		long long int sum=d0+d1;
		if(sum%5==0)
		{
			cout<<"NO\n";
		}
		else{
			
		
		long long int d2=(d0+d1)%10;
		long long int r=k-3,r1=r/4,r2=r%4;
		sum=sum+d2+(r1*20);
		d2=d2*2;
		for(i=1;i<=r2;i++)
		{
			long long int p;
			p=d2%10;
			sum=sum+p;
			d2=d2*2;
		}
		if(sum%3==0)
		{
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	}
	return 0;
}

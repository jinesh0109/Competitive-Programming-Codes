#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
bool primeNumber(long long int n)
{
	int z,d=1;
	for(z=2;z<=(long long int)(sqrt((double(n))));z++)
	{
		if(n%z==0)
		{
			d=0;
			return false;
		}
	}
	if(d==1)
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,c=1;
		long long int n;
		cin>>n;
		if(n==1)
		{
			cout<<"FastestFinger\n";
		}
		else if(n%2!=0 || n==2)
		{
			cout<<"Ashishgup\n";
		}
		else {
			for(i=2;i<=60;i++)
			{
				if(n==((long long int)(pow(2,(double)i))))
				{
					cout<<"FastestFinger\n";
					c=0;
					break;
				}
				else if(n<((long long int)(pow(2,(double)i)))){
					break;
				}
			}
			if(c==1 && primeNumber(n/2))
			{
				cout<<"FastestFinger\n";
			}
			else if(c==1 )
			{
				cout<<"Ashishgup\n";
			}
		}
		
	}

	return 0;
}

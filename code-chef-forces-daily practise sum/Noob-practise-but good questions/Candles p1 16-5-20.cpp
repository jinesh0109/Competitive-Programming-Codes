#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)	
	{
		long long int n;
		cin>>n;
		int k,i;
		for(k=2;k<=29;k++)
		{
			 long long int p=(long long int)(pow((double)2,(double)k))-1;
			if(n%p==0)	
			{
				long long int x=n/p;
				cout<<x<<endl;
				break;
			}
		}
	}
	return 0;
}

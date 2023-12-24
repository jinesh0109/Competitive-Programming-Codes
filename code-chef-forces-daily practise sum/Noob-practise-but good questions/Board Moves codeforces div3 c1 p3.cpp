#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i;
		cin>>n;
		if(n==1)
		{
			cout<<"0\n";
		}
		else{
			long long int sum=0;
			for(i=1;i<=n/2;i++)
			{
				sum=sum+i*i*8;
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}

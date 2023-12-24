#include<iostream>
using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;
	if(n>k)
	{
		cout<<"1";
	}
	else{
		long long int r=k/n,r1=k%n;
		
		if(r1>0)
		{
			r=r+1;
		}
		cout<<r<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	long long int n,m,temp;
	cin>>n>>m;
	if(m>n)
	{
		temp=n;
		n=m;
		m=temp;
	}
	cout<<n-1 <<" "<<m;
	return 0;
}

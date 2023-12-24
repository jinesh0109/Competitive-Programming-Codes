#include<iostream>
using namespace std;
int main(){
	long long int t,l;
	cin>>t;
	for(l=0;l<t;l++)
	{
		long long int n,sum=0;
		cin>>n;
		
		while(n>0)
		{
			sum=sum+n/5;
			n=n/5;
		}
		cout<<sum<<endl;
		
	}
	return 0;
}

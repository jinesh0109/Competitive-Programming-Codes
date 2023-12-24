#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int b[n/2],a[n],i;
	for(i=0;i<n/2;i++)
	cin>>b[i];
	long long int l=0,r=b[0];
	a[0]=0,a[n-1]=r;
	for(i=1;i<n/2;i++)
	{
		a[i]=max(l,b[i]-r);
		l=a[i];
		a[n-i-1]=b[i]-a[i];
		r=a[n-i-1];
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}

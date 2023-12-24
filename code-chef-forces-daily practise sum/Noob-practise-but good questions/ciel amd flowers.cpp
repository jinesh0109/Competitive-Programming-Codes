#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int r,g,b,d,c=0;
	cin>>r>>g>>b;
	d=min(r,min(b,g));
	r=r-d;
	b=b-d;
	g=g-d;
	if(r%3+g%3+b%3==4 && d>0)
	{
		d++;
	}
	cout<<d+r/3+g/3+b/3;
	
	return 0;
}

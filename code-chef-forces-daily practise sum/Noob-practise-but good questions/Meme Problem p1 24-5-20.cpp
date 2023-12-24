#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double d;
		cin>>d;
		double b=pow(d,2)-4*d;
		if(d==0)
		{
			cout<<"Y 0.000000 0.000000\n";
		}
		else if(b>=0)
		{
			double a=(d+sqrt(b))/2;
			double a1=d/a;
			cout<<"Y "<<setprecision(10)<<a<<" "<<setprecision(10)<<a1<<endl;
	
		}
		else{
			cout<<"N\n";
		}
		
	}
}

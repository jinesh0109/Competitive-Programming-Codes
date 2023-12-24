#include <iostream>
using namespace std;

int main() {
	long long int t,i,j;
	cin >> t;
	for(i=0;i<t;i++)
	{
	    long long int x,y,l,r,temp;;
	    cin >> x >> y>>l>>r;
	    if(y<x)
	    {
	    	temp=x;
	    	x=y;
	    	y=temp;
		}
		
	    	if(x==0 || y==0)
		{
			cout<<"0\n";
		}
		else if(r==x)
		{
			cout << x<<endl;
		}
		else if(r<x)
		{
			long long int sum1=1,v1=1;
			for(j=1;j<x;j++)
			{
				if((x&j)*(y&j)>v1)
				{
					v1=(x&j)*(y&j);
					sum1=j;
				}
			}
			cout << sum1<< endl;
		}
		else if(r==y)
		{
			cout << y<<endl;
		}
		else if(r>x && r<y)
		{
			
			long long int sum=1,value=1;
			for(j=x;j<=r;j++)
			{
				if((x&j)*(y&j)>value)
				{
					value=(x&j)*(y&j);
					sum=j;
				}
			}
			cout<< sum<<endl;
		}
		else 
		{
			long long int a=x|y;
			cout<< a<<endl;
		}
	    
	}
	return 0;
}


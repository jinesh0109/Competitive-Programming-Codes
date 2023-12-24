#include<iostream>
using namespace std;
int main()
{
	long long int n,min,max,i=2;
	cin>>n;
	cout<<n<<endl;
	char c,c1;
	cin>>c;
	c1=c;
	if(c=='E')return 0;
	else if(c=='L')
	{
		while(i<=300)
		{
			if(i%2==0)
			{
				cout<<n/2<<endl;
				cin>>c;
				if(c=='E')
				return 0;
			}
			else{
				max=n;
				n=n/2;
				cout<<n<<endl;
				cin>>c1;
				if(c1=='E')return 0;
				else if(c1=='G')
				{
					min=n;
					i++;
					break;
				}
				else{
					max=n;
				}
			}
			i++;
		}
		cout<<n/2<<endl;
		cin>>c;
		i++;
		while(i<=300)
		{
			if(i%2==0)
			{
				cout<<n/2<<endl;
				cin>>c;
			}
			else{
				n=(max+min)/2;
				cout<<n<<endl;
				cin>>c1;
				if(c1=='E')return 0;
				else if(c1=='G')
				{
					min=n;
				}
				else if(c1=='L'){
				max=n;
				
				}
				
			}
			i++;
		}
	}
		else if(c=='G')
		{
		while(i<=300)
		{
			if(i%2!=0)
			{
				cout<<n/2<<endl;
				cin>>c;
				if(c=='E')
				return 0;
			}
			else{
				max=n;
				n=n/2;
				cout<<n<<endl;
				cin>>c1;
				if(c1=='E')return 0;
				else if(c1=='G')
				{
					min=n;
					i++;
					break;
				}
				else{
					max=n;
				}
			}
			i++;
		}
		cout<<n/2<<endl;
		cin>>c;
		i++;
		while(i<=300)
		{
			if(i%2!=0)
			{
				cout<<n/2<<endl;
				cin>>c;
			}
			else{
				n=(max+min)/2;
				cout<<n<<endl;
				cin>>c1;
				if(c1=='E')return 0;
				else if(c1=='G')
				min=n;
				else if(c1=='L')
				max=n;
			}
			i++;
		}
	}
	return 0;
	
}

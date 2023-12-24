#include<iostream>
using namespace std;
int main()
{
	long long int n,min,max,i=2,n1;
	cin>>n;
	char c,c1;
	cout<<n<<endl;
	cin>>c;
	c1=c;
	if(c=='E')
	{
		return 0;	
	}
	
	else{
		
		while(i<=300)
		{
			if(i==2)
			{
				max=n;
				
			n=n/2;
			min=n;
			cout<<n<<endl;
			n1=n;
			cin>>c;
			c1=c;
			
			if(c=='E')
			{
				return 0;	
			}
			
			}
			
			else{
				cout<<n<<endl;
				
				cin>>c;
				if(c=='E')return 0;
				if(c==c1 && n==n1)
				{
					if(c=='E')return 0;
					else if(c=='G')
					{
						min=n;
						i++;
						break;
					}
					else if(c=='L')
					{
						max=n;
						n1=n;
						n=n/2;
						min=n;
						
					}
					
				}
				else{
					n1=n;
				}
				c1=c;
				
			}
				i++;
		}
			
		
		
		
		n=(min+max)/2;
		cout<<n<<endl;
		n1=n;
		cin>>c;
		c1=c;
		if(c=='E')return 0;
		i++;
		while(i<=300)
		{
			cout<<n<<endl;
			cin>>c;
			if(c=='E')return 0;
			if(c==c1 && n==n1)
			{
				if(c=='E')return 0;
				else if(c=='G')
				{
					min=n;
					n1=n;
					n=(min+max)/2;
				}
				else if(c=='L')
				{
					max=n;
					n1=n;
					n=(min+max)/2;
				}
			}
			else{
				n1=n;
			}
		
			c1=c;
				i++;
		}
		
		
	
}
return 0;
}

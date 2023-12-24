#include<iostream>
using namespace std;
int main()
{
	int t,l;
	cin>>t;
	for(l=0;l<t;l++)
	{
		int g,j;
		cin>>g;
		for(j=0;j<g;j++)
		{
			long long int n;
			int i,q;
			cin>>i>>n>>q;
			if(n%2==0)
			{
				if((i==1||i==2) && (q==2||q==1))
				{
				   cout<<n/2<<endl;
				}			
			}
			else{
				if(i==1 && q==2)
				{
					cout<<n/2+1<<endl;
				}
				else if(i==1 && q==1){
					cout<<n/2<<endl;
					
				}
				else if(i==2 && q==1)
				{
					cout<<n/2+1<<endl;
				}
				else if(i==2 && q==2)
				{
					cout<<n/2<<endl;
				}
				
			}			
		}
	}
	return 0;
}

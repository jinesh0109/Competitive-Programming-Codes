#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m,k;
		cin>>n>>m>>k;
		if(k<max(n,m))
		{
			cout<<-1<<endl;;
		}
		else if((n%2)==(m%2))
			{
				if(k%2==max(n,m)%2)
				{
					cout<<k<<endl;
				}
				else{
					cout<<k-2<<endl;
				}
			}
		
		else if((n%2)!=(m%2)){
			cout<<k-1<<endl;
		}
	}
	return 0;
}

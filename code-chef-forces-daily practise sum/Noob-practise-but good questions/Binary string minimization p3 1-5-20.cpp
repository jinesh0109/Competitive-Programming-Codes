#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,i;
		cin>>n>>k;
		char str[n];
		for(i=0;i<n;i++)
		cin>>str[i];
		long long int one=0;
		char temp;
		for(i=0;i<n;i++)
		{
			
			if(str[i]=='0' )
			{
				if(k>=i-one)
				{
					temp=str[i-one];
					str[i-one]=str[i];
					str[i]=temp;
					k=k-one;
				}
				else{
					temp=str[i-k];
					str[i-k]=str[i];
					str[i]=temp;
					break;
				}
			}
			else{
				one++;
			}
		}
		for(i=0;i<n;i++)
		cout<<str[i];
		cout<<"\n";
	}
	return 0;
}

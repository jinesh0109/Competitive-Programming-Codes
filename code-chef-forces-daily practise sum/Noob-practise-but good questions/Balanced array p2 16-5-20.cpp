#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int arr[n];
		if((n/2)%2!=0)
		{
			cout<<"NO\n";
		}
		else{
			long long int i,s=2,s1=1;
			arr[0]=2,arr[n/2]=1;
			cout<<"YES\n";
			for(i=1;i<n/2;i++)
			{
				arr[i]=arr[i-1]+2;
				s=s+arr[i];
			}
			for(i=n/2+1;i<n;i++)
			{
				if(i!=n-1)
				{
					arr[i]=arr[i-1]+2;
					s1=s1+arr[i];
				}
				else{
					arr[i]=s-s1;
				}
			}
			
			for(i=0;i<n;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		
	}
	return 0;
}

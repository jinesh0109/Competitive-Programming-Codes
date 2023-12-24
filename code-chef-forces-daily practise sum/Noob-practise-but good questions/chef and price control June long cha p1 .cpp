#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i;
		cin>>n>>k;
		int arr[n];
		long long int revenue=0;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]>k)
			{
				revenue=revenue+arr[i]-k;
			}
		}
	cout<<revenue<<endl;
	
	
	}
	return 0; 
}

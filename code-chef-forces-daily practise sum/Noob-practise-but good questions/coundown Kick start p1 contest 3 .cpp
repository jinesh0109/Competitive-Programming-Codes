#include<iostream>
using namespace std;
int main()
{
	long long int t,z;
	cin>>t;
	for(z=0;z<t;z++)
	{
		long long int n,k,i,j;
		cin>>n>>k;
		long long int arr[n],count=0,arr1[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]==k)
			{
				arr1[count]=i;
				count++;
			}
		}
		if(count==0)
		{
			cout<<"Case #"<<z+1<<": "<<"0\n";
		}
		else{
			long long int number=0,c;
			for(i=0;i<count;i++)
			{
				for(j=arr1[i]+1;j<arr1[i]+k;j++)
				{
					 c=1;
					if(arr[j]==arr[j-1]-1)
					{
						c=0;
					}
					else{
						break;
					}
				}
				if(c==0)
				{
					number++;
				}
			}
			cout<<"Case #"<<z+1<<": "<<number<<endl;
			
		}
	}
	return 0;
}

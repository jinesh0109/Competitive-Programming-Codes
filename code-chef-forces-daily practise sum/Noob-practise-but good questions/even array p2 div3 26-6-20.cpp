#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,even,odd;
		cin>>n;
		if(n%2==0)
		{
			odd=n/2;
			even=n/2;
		}
		else{
			odd=n/2;
			even=(n/2)+1;
		}
		int arr[n],wodd=0,weven=0,aodd=0,aeven=0;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]%2==0)
				aeven++;
				else
				aodd++;
			if(i%2==0)
			{
				if(arr[i]%2!=0)
				{
					weven++;
				}
				
			}
			else{
				if(arr[i]%2==0)
				{
					wodd++;
				}
				
			}
		}
		if(even!=aeven|| odd!=aodd)
		{
			cout<<"-1\n";
		}
		else{
			cout<<weven<<endl;
		}
		
		
				
	}
		return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n][n];
		int i=1,j=2,row,col;
		for(row=0;row<n;row++)
		{
			for(col=0;col<n;col++)
			{
				if((row+1)%2!=0)
				{
					if(((col+1)%2!=0))
					{
						arr[row][col]=i;
						i=i+2;
					}
					else{
						arr[row][col]=j;
						j=j+2;
					}
				}
				else{
					if(((col+1)%2==0))
					{
						arr[row][col]=i;
						i=i+2;
					}
					else{
						arr[row][col]=j;
						j=j+2;
					}
				}
			}
		}
		for(row=0;row<n;row++)
		{
			for(col=0;col<n;col++)
			{
				cout<<arr[row][col]<<" ";
			}
			cout<<"\n";
		}
		
	}
	return 0;
}

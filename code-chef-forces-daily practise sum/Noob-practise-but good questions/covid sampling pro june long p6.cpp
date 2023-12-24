#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int cost=0;
	cin>>t;
	while(t--)
	{
		int n,p,i,j,x;
		cin>>n>>p;
		int arr[n][n];
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				arr[i-1][j-1]=0;
			}
		}
		int count,c1,total,c2;
		cout<<"1 1 1 60 60\n";
		cin>>total;
		for(i=1;i<=n;i++)
		{
			if(i!=n)
			{
				cout<<"1 "<<i+1<<" 1 "<<n<<" "<<n<<endl;	
			}
			int c=0;
			
			cin>>count;
			if(total==count)
			{
				continue;
			}
			else if(total!=count){
				c1=total-count;
				c2=c1;
				total=count;
			}
			
			for(j=2;j<=n/2+1;j++)
			{
				cout<<"1 "<<i<<" "<<j<<" "<<i<<" "<<n<<endl;
				cin>>x;
			
				if(x!=c1)
				{
					arr[i-1][j-2]=1;
					c1--;
					
				}
				if(c1==0)
				{
					
					break;
				}
					
				
			}
			if(c1==0)
			{
				if(count==0)
				{
					break;
				}
				else{
					continue;		
				}
			}
			
			
			for(j=59;j>=n/2;j--)
			{
				cout<<"1 "<<i<<" 1 "<<i<<" "<<j<<endl;
				cin>>x;
				
				if(x!=c2)
				{
					arr[i-1][j]=1;
					c2--;
					c++;
					
				}
				if(c1-c==0)
					break;
			}
			if(count==0)
			break;
			
		}
		cout<<"2\n";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<"\n";
		}
		cin>>x;
		if(x==-1)
		{
			return 0;
		}
		
	}
}

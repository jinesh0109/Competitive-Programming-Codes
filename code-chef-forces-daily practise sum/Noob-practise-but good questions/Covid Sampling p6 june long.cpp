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
		int n,p,i,j;
		cin>>n>>p;
		int jump,x;
			if(p==2)
				jump=20;
			else if(p==5)
				jump=15;
			else if(p==10)
				jump=10;
			else 
				jump=5;
		int arr[n][n];
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				arr[i-1][j-1]=0;
			}
		}
		
		int kept;
		for(i=1;i<=n;i++)
		{
			cout<<"1 "<<i<<" "<<"1 "<<i<<" "<<n<<endl;
			cin>>x;
			cost+=((2*n-1)*(n))/(x+1);
			if(x==0)
			{
				continue;
			}
			j=1;
			while(j<=60)
			{
				int c,total;
				if((j-1)%jump==0)
				{
					cout<<"1 "<<i<<" "<<j<<" "<<i<<" "<<j+jump-1<<endl;
					cin>>x;
					total=x; 	
					kept=j+jump;
					cost=cost+(((2*n-1)*(2*n-jump))/(x+1));
					if(x==0)	
					{
						j=j+jump;
						continue;
					}
					c=0;
				}
				
				cout<<"total "<<total<<" c value "<<c<<endl;
				cout<<"1 "<<i<<" "<<j<<" "<<i<<" "<<j<<endl;
				cin>>x;
				cost+=((2*n-1)*(2*n-1))/(x+1);
				if(x==1)
				{
					arr[i-1][j-1]=1;
					c++;
					if(c==total)
					{
						int dif=kept-j;
						j=j+dif;
						continue;
					}
					j++;
				}
				else{
					j++;
				}
				
			}
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
			exit('0');
		}
	
	}
}

#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
	int n,m,i,j,k;
	cin>>n>>m;
	long long int arr[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int z=1;
	if(n%2==0)
	{
		for(i=0;i<n;i++)
		{		
			for(j=0;j<m;j++)
			{
				if(arr[0][0]!=arr[i][j])
				{
					z=0;
					break;
				}
			}
		}
		if(z==1)
		{
			cout<<"NIE";
			exit(0);
		}
	}
	
	long long int arr1[n];
	int d=1;
	for(k=0;k<m;k++)
	{
		if(n==1 && m==1 && arr[0][0]>0)
		{
			cout<<"TAK\n";
			cout<<"1";
			break;
		}
		else if(n==1 && m==1 && arr[0][0]==0){
			cout<<"NIE";
			break;
		}
		else if(n==1)
		{
			cout<<"TAK\n";
			for(i=0;i<m;i++)
			{
				if(arr[0][i]>0)
				{
					cout<<i+1;
				}
			}
			break;
		}
		arr1[0]=k+1;
		int c=1;
		for(i=1;i<n;i++)
		{
			d=1;
			for(j=0;j<m;j++)
			{
				if(arr[0][k]!=arr[i][j])
				{
					arr[0][k]=((arr[0][k])|(arr[i][j]))-(arr[0][k]&arr[i][j]);
					arr1[i]	=j+1;
					c=0,d=0;
					break;
					
				}
				else{
					
					arr1[i]	=j+1;
					
				}
			}
				if(c==1 )
				{
					
					if (k==m-1)
					{
						cout<<"NIE\n";
						break;	
					}
					else{
						arr[0][k]=((arr[0][k])|(arr[i][j]))-(arr[0][k]&arr[i][j]);
					}
					
				}
				
		}
		if(d==0)
		{
			cout<<"TAK\n";
			for(j=0;j<n;j++)
			{
				cout<<arr1[j]<<" ";
			}
			break;
		}
	}
	
	return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j;
	cin>>n;
	long long int arr[n][n];
	long long int arr1[n],arr2[n],d1=0,d2=0,row=0,col=0;
	for(i=0;i<n;i++)
	{
		arr1[i]=0;
		arr2[i]=0;
	}
	for(i=0;i<n;i++)
	{
		long long int sum=0;
		for(j=0;j<n;j++)
		{
			
			cin>>arr[i][j];
			sum=sum+arr[i][j];
			arr1[j]=arr1[j]+arr[i][j];    //arr1 is column sum
			if(i==j)						// arr2 is row sum
			{
				d1=d1+arr[i][j];
			}
			if(i==n-1-j)
			{
				d2=d2+arr[i][j];
			}
			if(arr[i][j]==0)
			{
				row=i;
				col=j;
			}
			
		}
		arr2[i]=sum;
	}
	if(n==1)
	{
		cout<<"1";
		exit(0);
	}
	long long int diff;
	if(row==0)
	{
		diff=arr2[1]-arr2[0];
		if(diff<=0)
		{
			cout<<"-1";
			exit(0);
		}
		arr2[0]=arr2[0]+diff;
	}
	else{
		diff=arr2[0]-arr2[row];
		if(diff<=0)
		{
			cout<<"-1";
			exit(0);
		}
		arr2[row]=arr2[row]+diff;
	}
	if(col==0)
	{
		diff=arr1[1]-arr1[0];
		if(diff<=0)
		{
			cout<<"-1";
			exit(0);
		}
		arr1[0]=arr1[0]+diff;
	}
	else{
		diff=arr1[0]-arr1[col];
		if(diff<=0)
		{
			cout<<"-1";
			exit(0);
		}
		arr1[col]=arr1[col]+diff;
	}
	if(row==col)
	{
		d1=d1+diff;
	}
	if(row==n-1-col)
	{
		d2=d2+diff;
	}
	int c=1;
	for(i=0;i<n;i++)
	{
		if((arr2[0]!=arr2[i])||(arr1[0]!=arr1[i]))
		{
			cout<<"-1";
			c=0;
			break;
		}
		else if(arr2[0]!=d1)
			{
				cout<<"-1";
				c=0;
				break;
			}
		else if(arr2[0]!=d2)
			{
				cout<<"-1";
				c=0;
				break;
			}
		
	}
	if(c==1)
	{
		cout<<diff;
	}
	
	
	
	
	
	return 0;
}

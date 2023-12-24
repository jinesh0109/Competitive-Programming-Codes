#include<stdio.h>
int main(){
	long long int n,m,i,j;
	scanf("%lld %lld",&n,&m);
	long long int arr[n][m];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%lld",&arr[i][j]);
	     }
	}
	long long int arr1[n];
	for(i=0;i<n;i++)
	{
		long long int min=10000000000;
		for(j=0;j<m;j++)
		{
			if(arr[i][j]<min)
			{
				min=arr[i][j];
			}
		}
		arr1[i]=min;
	}
	long long int max=0;
	for(i=0;i<n;i++)
	{
		if(arr1[i]>max)
		{
			max=arr1[i];
		}
	}
	printf("%lld",max);
	
	return 0;
}

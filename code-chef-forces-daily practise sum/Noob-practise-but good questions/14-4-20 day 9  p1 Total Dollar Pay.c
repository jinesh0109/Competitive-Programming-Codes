#include<stdio.h>
int main(){

    int tc,i,j;
	scanf("%d",&tc);
	for(i=0;i<tc;i++)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		int arr[n],arr1[n];
		for(j=0;j<n;j++)
		{
			scanf("%d %d",&arr[j],&arr1[j]);
		}
		int sum=0;
		for(j=0;j<n;j++)
		{
			if(k>=arr[j])
			{
				k=k-arr[j];
				
			}
			else
			{
				arr[j]=arr[j]-k;
				k=0;
				sum=sum+(arr[j]*arr1[j]);
				
			}
		}
		printf("%d\n",sum);
	}
	
	return 0;
}

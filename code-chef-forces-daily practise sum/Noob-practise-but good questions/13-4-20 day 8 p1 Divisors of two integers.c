#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n],arr1[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
			    temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;	
			}
		}
	}
	int M=arr[n-1];
	for(i=0;i<n;i++)
	{
		if(i!=n-1)
		{
		
		if(arr[n-1]%arr[i]==0 && arr[i]!=arr[i+1])
		{
			arr1[i]=arr[i];
			arr[i]=0;
			
		}
	}
	else{
		arr1[i]=arr[i];
		arr[i]=0;
	}
	}
	
	int max=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("%d %d",M,max);
	return 0;
}

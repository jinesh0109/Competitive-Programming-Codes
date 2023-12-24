#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,j;
	scanf("%d",&n);
	char respect[n],guilty[n];
	scanf("%s",respect);
	scanf("%s",guilty);
	
	int arr[n],arr1[n],i;
	for(i=0;i<n;i++)
	{
		arr[i]=(respect[i])-48;
		arr1[i]=(guilty[i])-48;
	}
	int t=0,t1=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j,n;j++)
		{
			if(arr[j]<arr[i])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
			if(arr1[j]<arr1[i])
			{
				t1=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=t1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		
	}
	return 0;
}

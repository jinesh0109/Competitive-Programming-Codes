#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		int n;
		scanf("%d",&n);
		int arr[n],arr1[n],i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		int c=1,d=0;
		
		for(i=0;i<n;i++)
		{
			if(abs(arr[i]-arr[i+1])<=2)
			{
				c++;
			}
			else{
				arr1[d]=c;
				d++;
				c=1;
			}
		}
		int max=arr1[0],min=arr1[0];
		for(i=0;i<d;i++)
		{
			if(arr1[i]>max)
			{
				max=arr1[i];
			}
			if(arr1[i]<min)
			{
				min=arr1[i];
			}
		}
		printf("%d %d\n",min,max);	
	}
	return 0;
}

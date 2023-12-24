#include<stdio.h>

int main(){
	long long int t,i,j,k;
	scanf("%lld",&t);
	for(j=0;j<t;j++)
	{
		long long int n;
		scanf("%lld",&n);
		long long int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}
		long long int temp;
		for(i=0;i<n;i++)
		{
			for(k=i+1;k<n;k++)
			{
				if(arr[k]<arr[i])
				{
					temp=arr[i];
					arr[i]=arr[k];
					arr[k]=temp;
				}
			}
		}
		long long int arr1[n],li=0,ri=n-1,l=0;
		while(l<n)
		{
			arr1[l]=arr[li];
			arr1[l+1]=arr[ri];
			l=l+2;
			li++;
			ri--;
		}
		for(i=n-1;i>=0;i--)
		{
			printf("%lld ",arr1[i]);
		}
		
	}
	return 0;
}

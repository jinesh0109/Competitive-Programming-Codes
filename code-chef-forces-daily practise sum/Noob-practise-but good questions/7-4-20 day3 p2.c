#include<stdio.h>
int main(){
	long long int n;
	scanf("%lld",&n);
	long long int i,c=0;
	long long int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	long long int sum1=arr[0],sum3=arr[n-1];
	long long int j=0,k=n-1;
	while(j<k)
	{
		if(sum1>sum3)
		{
			k--;
			sum3=sum3+arr[k];
			
		}
		else if(sum3>sum1)
		{
			j++;
			sum1=sum1+arr[j];
			
			
		}
		else if(sum1==sum3)
		{
			j++;
			c=sum1;
			sum1=sum1+arr[j];
			
		}
	}
	printf("%lld",c);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int t,i,j;
	scanf("%lld",&t);
	for(j=0;j<t;j++)
	{
		long long int n,q;
		scanf("%lld %lld",&n,&q);
		long long int arr[q],arr1[q];
		for(i=0;i<q;i++)
		{
			scanf("%lld %lld",&arr[i],&arr1[i]);
		}
		long long sum=0,p=0;
		for(i=0;i<q;i++)
		{
			sum=sum+abs(p-arr[i])+abs(arr1[i]-arr[i]);
			p=arr1[i];
			
		}
		printf("%lld\n",sum);
	}
	return 0;
}

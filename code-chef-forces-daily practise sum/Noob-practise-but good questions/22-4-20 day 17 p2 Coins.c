#include<stdio.h>
int main(){
	long long int n,i,j;
	scanf("%lld",&n);
	long long int arr[n],d=0;
	for(j=1;j<=n;j++)
	{
		if(n%j==0)
		{
			arr[d]=j;
			d++;
		}
	}
	for(j=d-1;j>=0;j--)
	{
		if(n%arr[j]==0)
		{
			printf("%lld ",arr[j]);
			n=arr[j];
		}
	}
	return 0;
}

#include<stdio.h>
#include<math.h>

int main(){
long long int n,i,j,res,c=0;	
	scanf("%lld",&n);
	res=(long long int)((sqrt)((double)(n)));
	
	for(j=2;j<=res+1;j++)
	{
		if(n%j==0)
		{
			c=1;
			break;
		}
	}
	if(c==0)
	{
	   long long int sum1=0,M1=1;
		while(sum1<n)
		{
			
			sum1=sum1+M1;
			M1=M1*2;
			
		}
		if(sum1==n)
		{
			printf("1");
			exit(0);
		}
	}
	long long int arr[n/2],d=0;
	for(j=1;j<=n;j++)
	{
		if(n%j==0)
		{
			arr[d]=j;
			d++;
		}
	}
	for(j=0;j<=d;j++)
	{
		long long int sum=0,M=arr[j];
		while(sum<n)
		{
			
			sum=sum+M;
			M=M*2;
			
		}
		if(sum==n )
		{
			printf("%lld\n",arr[j]);
			break;
		}
		
	}
	return 0;
}

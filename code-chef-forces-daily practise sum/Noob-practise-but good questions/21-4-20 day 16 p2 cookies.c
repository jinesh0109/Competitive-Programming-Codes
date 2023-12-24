#include<stdio.h>
#include<math.h>
int main(){
	long long int n,i,j=1;
	scanf("%lld",&n);
	if(n==0)
	{
		printf("1");
		exit(0);
	}
	double a=((pow(2,n))*(pow(2,n)));
	double b=(((pow(2,n))*(pow(2,n))+1)/2);
	
	printf("%lf %lf",a,b);
	return 0;
}

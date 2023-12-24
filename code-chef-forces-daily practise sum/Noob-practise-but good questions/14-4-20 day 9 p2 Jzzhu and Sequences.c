#include<stdio.h>
int main(){
	long long int x,y,n;
	long long int s=1%1000000007;
	printf("%lld\n",s);
	printf("%lld\n",(s+1000000007)%1000000007);
	exit(0);
	scanf("%lld %lld",&x,&y);
	scanf("%lld",&n);
	if(n%6==1)
	{
		printf("%lld",(((x%1000000007)+1000000007)%1000000007));
	}
	else if(n%6==2)
	{
		printf("%lld",(((y%1000000007)+1000000007)%1000000007));
	}
	else if(n%6==3)
	{
		printf("%lld",((((y-x)%1000000007)+1000000007)%1000000007));
	}
	else if(n%6==4)
	{
		printf("%lld",(((-x%1000000007)+1000000007)%1000000007));
	}
	else if(n%6==5)
	{
		printf("%lld",(((-y%1000000007)+1000000007)%1000000007));
	}
	else if(n%6==0)
	{
		printf("%lld",((((x-y)%1000000007)+1000000007)%1000000007));
	}
	return 0;
}

#include<stdio.h>
int main(){
	long long int t,k;
	scanf("%lld",&t);
	for(k=0;k<t;k++)
	{
		long long int x,y,l,r,a;
		scanf("%lld%lld%lld%lld",&x,&y,&l,&r);
		a=x|y;
		while(a<l || a>r)
		{
		
		if(a<l || a>r)
		{
			a=a/2;
		}
	}
		printf("%lld\n",a);
		
	}
	return 0;
}

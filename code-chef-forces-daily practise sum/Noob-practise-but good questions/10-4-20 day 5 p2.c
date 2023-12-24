#include<stdio.h>
int main(){
	long long int r,g,b,i;
	scanf("%lld %lld %lld",&r,&g,&b);
	long long int min=0,r1,g1,b1;
	r1=r/3;
	g1=g/3;
	b1=b/3;
	if(r1<g1 && r1<b1)
	{
		min=r1;
	 } 
	 else if(g1<b1)
	 {
	 	min=g1;
	 }
	 else 
	 {
	 	min=b1;
	 }
	 printf("%lld",min+r1+g1+b1);
	return 0;
}

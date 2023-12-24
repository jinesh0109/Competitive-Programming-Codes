#include<stdio.h>
int main(){
	long long int n;
	scanf("%lld",&n);
	int remainder=n%4;
	if(remainder==1)
	{
		printf("8");
	}
	else if(remainder==2)
	{
		printf("4");
	}
	else if(remainder==3)
	{
		printf("2");
	}
	else{
		printf("6");
	}
	
	return 0;
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int i;
long long int factorial(long long int x)
	{
		long long int f=1;
		for(i=x;i>0;i--)
		{
			f=f*i;
		}
		return f;
	}
int main(){
	char str[11],str1[11];
	scanf("%s",str);
	scanf("%s",str1);
	
	
	int c=0,c1=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='+')
		{
			c++;
		}
		else{
			c1++;			
		}
	}
	int d=0,d1=0;
	for(i=0;i<strlen(str1);i++)
	{
		if(str1[i]=='+')
		{
			d++;		}
		else if(str1[i]=='-')
		{
			d1++;		}
	}
	if(c-d>=0 && c1-d1>=0){
	int sum=c-d+c1-d1;
	double result=factorial(sum)/(factorial(c-d)*factorial(c1-d1));
	double power=pow(2,sum);
	printf("%.9lf",result/power);
	}
	else{
		printf("0.000000000");
	}
	return 0;
}

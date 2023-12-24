#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n=100001;
		
		char str[n];
		scanf("%s",str);
		long long int i=0,c=0;
		while(i<strlen(str))
		{
			if(str[i]==str[i+1])
			{
				if(i==(strlen(str)-2))
				{
					break;
				}
				else{
					i++;	
				}
				
			}
			else{
				i=i+2;
				c++;
			}
		}
		printf("%lld\n",c);
	}
	
}

#include<stdio.h>
#include<string.h>
int t,j;
scanf("%d",&t);
for(j=0;j<t;j++)
{
	char str[101];
	int i;
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		if(i%2==0)
		{
			if(i==strlen(str)-2)
			{
				printf("%c%c",str[i],str[i+1]);
				
				
			}	
			else{
				printf("%s",str[i]);
			}	
		}
		
	}
}

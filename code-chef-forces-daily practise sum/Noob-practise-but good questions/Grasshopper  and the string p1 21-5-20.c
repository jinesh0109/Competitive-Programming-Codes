#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[101];
	scanf("%s",str);
	int arr[101];
	int i,diff,c=0,count=0;
	
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' ||str[i]=='U' ||str[i]=='Y')
		{
			diff=i+1-c;
			c=i+1;
			arr[count]=diff;
			count++;
		}
		if(i==strlen(str)-1)
		{
			arr[count]=strlen(str)+1-c;
		}
	}
	int max=arr[0];
	for(i=0;i<count+1;i++)
	{
		if(arr[i]>max)
		max=arr[i]; 
	}
	
	printf("%d",max);
	return 0;
}

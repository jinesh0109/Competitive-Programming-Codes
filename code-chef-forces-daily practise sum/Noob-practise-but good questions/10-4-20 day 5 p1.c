#include<stdio.h>
int main(){
	int n,i,j,sum=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	
	if(sum!=0)
		{
			printf("YES\n");
			printf("1\n");
			printf("%d %d\n",1,n);
			exit(0);
		}
		sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
		if(sum!=0)
		{
			printf("YES\n");
			printf("2\n");
			printf("%d %d\n",1,i+1);
			printf("%d %d\n",i+2,n);
			exit(0);
		}
	}
	printf("NO");
	return 0;
}

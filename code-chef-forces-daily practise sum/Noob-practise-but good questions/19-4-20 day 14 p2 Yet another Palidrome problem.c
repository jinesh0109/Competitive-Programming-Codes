#include<stdio.h>
int main(){
	int t,i,j,k;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		int n;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		int c=0;
		for(i=0;i<n;i++)
		{
			for(k=0;k<n;k++)
			{
				if(k!=i && arr[k]==arr[i] && i+1!=k && i-1!=k)
				{
					printf("YES\n");
					c=1;
					break;
				}
			}
			if(c==1)
			{
				break;
			}
		}
		if(c==0)
		{
			printf("NO\n");
		}
	}
	return 0;
}
